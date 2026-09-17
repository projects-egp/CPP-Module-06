/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:47:22 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/17 17:18:52 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

static void	accessPtr(Data *ptr)
{
	std::cout << "id: " << ptr->id << std::endl;
	std::cout << "text[10]:" << std::endl;
	for (int i = 0; i < 10; ++i)
		std::cout  << '"' << ptr->text[i] << '"' << std::endl;
	if (!ptr->checkStatus)
		std::cout << "checkStatus: false\n" << std::endl;
	else
		std::cout << "checkStatus: true\n" << std::endl;
}

int	main(void)
{
	Data		dataStruct, *endPtr = NULL;
	uintptr_t	integerFromPointer;

	std::cout << "Creating dataStruct" << std::endl;
	dataStruct.id = 42;
	dataStruct.checkStatus = false;
	dataStruct.text[0] = "This is dataStruct's array of 10 strings\n";
	for (int i = 0; i < 10; ++i)
		dataStruct.text[i].push_back((i + '0'));
	std::cout << "\nGoing to access to &dataStruct" << std::endl;
	accessPtr(&dataStruct);

	std::cout << "\t\tBefore serialize\n\t&dataStruct: " << &dataStruct << " endPtr:" << endPtr << std::endl;
	integerFromPointer = Serializer::serialize(&dataStruct);
	std::cout << "\n\tAfter serialize(), we have uintptr_t " << integerFromPointer << std::endl;
	endPtr = Serializer::deserialize(integerFromPointer);
	std::cout << "\n\t\tAfter deserialze\n\t&dataStruct: " << &dataStruct << " endPtr:" << endPtr << std::endl;
	
	std::cout << "\nGoing to access to endPtr" << std::endl;
	accessPtr(endPtr);
	std::cout << "\nChange endPtr->checkStatus to 'true'" << std::endl;	
	endPtr->checkStatus = true;
	std::cout << "\nGoing to access to &dataStruct" << std::endl;
	accessPtr(&dataStruct);
	if (dataStruct.checkStatus)
	{
		std::string	str= "This is a new string for dataStruct.text[0]";
		std::cout << str << std::endl;
		dataStruct.text[0] = str;
		std::cout << "\nGoing to access to endPtr" << std::endl;
		accessPtr(endPtr);
	}
	return 0;
}
