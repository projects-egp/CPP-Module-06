/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:39:04 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/08 17:07:59 by enrgil-p         ###   ########.fr       */
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
	if (input.length() == 1 && !isdigit(input[0]))
		return true;
	else if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
		return true;
	return false;
}

static int	typeDetect(const std::string& input)
{
	if (isChar(input))
		return CHAR;
}

void	ScalarConverter::convert(const std::string& input,
		ConversionOutput& output)
{
	int	index = 0;

	(void)output;//debug
	index = typeDetect(input);
	//switch
	//	Convert string to that type
	//	From converted type, convert to other types
}
