/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 22:22:01 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/14 20:46:33 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

Base*	generate(void)
{
	static bool	randomSeedInit = false;
	int		randomGenerator;
	Base*		result;

	if (!randomSeedInit)
	{
		std::srand(std::time(NULL));
		randomSeedInit = true;
	}
	randomGenerator = std::rand() % 3;
	switch (randomGenerator)
	{
		case 0:
			result = new A();
			break ;
		case 1:
			result = new B();
			break ;
		case 2:
			result = new C();
			break ;
	}
	return result;
}

void	identify(Base* p)
{
	A*	ptrA;
	B*	ptrB;
	C*	ptrC;

	ptrA = dynamic_cast<A*>(p);
	ptrB = dynamic_cast<B*>(p);
	ptrC = dynamic_cast<C*>(p);
	if (ptrA != NULL)
		std::cout << "\tThis Base* points to an 'A' object" << std::endl;
	else if (ptrB != NULL)
		std::cout << "\tThis Base* points to a 'B' object" << std::endl;
	else if (ptrC != NULL)
		std::cout << "\tThis Base* points to a 'C' object" << std::endl;
	else
		std::cout << "\tThis Base* is not a child class" <<std::endl;
}

void	identify(Base& p)
{
	A	refA;
	B	refB;
	C	refC;
	
	try 
	{
		refA = dynamic_cast<A&>(p);
		std::cout << "\tThis Base& is an 'A' object" << std::endl;
		return ;
	}
	catch (std::exception & e){}
	
	try 
	{
		refB = dynamic_cast<B&>(p);
		std::cout << "\tThis Base& is a 'B' object" << std::endl;
		return ;
	}
	catch (std::exception & e){}
	
	try 
	{
		refC = dynamic_cast<C&>(p);
		std::cout << "\tThis Base& is a 'C' object" << std::endl;
		return ;
	}
	catch (std::exception & e){}
	std::cout << "\tThis Base& is not a child class" <<std::endl;
}


int	main(void)
{
	Base	*x, *y, *z, *null = NULL, not_child;

	x = generate();y = generate();z = generate();

	std::cout << "\n\nGoing to null by pointer" << std::endl;
	identify(null);
	std::cout << "Going to *null by reference" << std::endl;
	identify(*null);

	std::cout << "\n\nGoing to identify x by pointer" << std::endl;
	identify(x);
	std::cout << "Going to identify *x by reference" << std::endl;
	identify(*x);
	
	std::cout << "\n\nGoing to identify y by pointer" << std::endl;
	identify(y);
	std::cout << "Going to identify *y by reference" << std::endl;
	identify(*y);

	std::cout << "\n\nGoing to identify z by pointer" << std::endl;
	identify(z);
	std::cout << "Going to identify *z by reference" << std::endl;
	identify(*z);
	
	std::cout << "\n\nGoing to identify &not_child by pointer" << std::endl;
	identify(&not_child);
	std::cout << "Going to identify not_child by reference" << std::endl;
	identify(not_child);

	delete x; delete y; delete z;
	return 0;
}
