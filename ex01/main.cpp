/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:47:22 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/10 19:52:29 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

int	main(void)
{
	Data*		dataStruct, endPtr = NULL;//Seems to be a struct, not an object???
	uinptr_t	integerFromPointer;

	integerFromPointer = Serializer::serialize(dataStruct);
	endPtr = Serializer::deserialize(integerFromPointer);
	//check that you can access endPtr members,
	//	also that are same as from dataStruct (?)
	return 0;
}
