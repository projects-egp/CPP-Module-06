/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 22:22:01 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/17 16:13:31 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

int	main(void)
{
	Base	*x, *y, *z, *null = NULL, not_child;
	std::cout << "Created Base: *x, *y, *z, *null, not_child\n" << std::endl;

	x = generate();y = generate();z = generate();
	std::cout << "Generated a child object to Base pointers x, y and z" << std::endl;

	std::cout << "\n\nGoing to identify null by pointer" << std::endl;
	identify(null);
	std::cout << "Going to identify *null by reference" << std::endl;
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
