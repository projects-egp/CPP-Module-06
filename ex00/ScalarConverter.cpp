/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:39:04 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/08 19:41:01 by enrgil-p         ###   ########.fr       */
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
	return -1;
}

static void	castOtherTypes(Conversionutput& output, int index)
{
	switch (index)
	{
		case CHAR:
		case INT:
		case FLOAT:
		case DOUBLE:
	}
}

void	ScalarConverter::convert(const std::string& input,
		ConversionOutput& output)
{
	int	index;

	index = typeDetect(input);
	switch (index)
	{
		case CHAR:
			char	c;

			if (input.length() == 1)
				c = input[0];//IS THIS CORRECT? OR SHOUD CAST?
			else
				c = input[1];
			output.setChar(c);
			output.setCheck(true, index);
			castOtherTypes(output, index);
			break;
		case INT:
			output.setCheck(true, index);
			castOtherTypes(output, index);
			break;
		case FLOAT:
			output.setCheck(true, index);
			castOtherTypes(output, index);
			break;
		case DOUBLE:
			output.setCheck(true, index);
			castOtherTypes(output, index);
			break;
		default:
			return;
	}
}
