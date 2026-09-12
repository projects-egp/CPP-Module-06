/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:47:22 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/12 21:23:45 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

int	main(void)
{
	Data		dataStruct, *endPtr = NULL;
	uintptr_t	integerFromPointer;

	std::cout << &dataStruct << " " << endPtr << std::endl;
	integerFromPointer = Serializer::serialize(&dataStruct);
	endPtr = Serializer::deserialize(integerFromPointer);
	std::cout << &dataStruct << " " << endPtr << std::endl;
	if (&dataStruct == endPtr)
		std::cout << "Same pointer" << std::endl;
	else
		std::cout << "Different pointer" << std::endl;
	std::cout << &dataStruct << " " << endPtr << std::endl;
	endPtr->id = 42;
	std::cout << "endPtr id: " << endPtr->id << std::endl;
	return 0;
}
