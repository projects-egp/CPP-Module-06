/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifiers.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:02:01 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/18 13:45:25 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

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
