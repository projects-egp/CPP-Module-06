/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:39:04 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/08/31 23:19:06 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "general.hpp"

/*	*	*	ORTHODOX CANONICAL	*	*	*/
ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {*this = other;}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

ScalarConverter::~ScalarConverter() {}
//
//
//
//
//
/*	*	*	CONVERTER && UTILS	*	*	*/
static bool	isChar(const std::string& input)
{
	std::string::const_iterator	i;//const_iterator for const std::string
	
	i = input.begin();
	if (input.length() == 1 && !(isdigit(*i)))
		return true;
	else if (input.length() == 3 && /*first and last are "\'\ " */)
	return false;
}

static void	typeDetect(const std::string& input)
{
	if (isChar(input))
		//Cast???
}

void	ScalarConverter::convert(const std::string& input,
		ConversionOutput& output)
{
//	std::string::iterator	i;

	std::cout << input << std::endl;
	//typeDetect(input, &types);
	//Convert string to that type
	//From converted type, convert to other types
	//PRINT (in main)
}
