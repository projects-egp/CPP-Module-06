/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:00:39 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/17 16:01:02 by enrgil-p         ###   ########.fr       */
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
