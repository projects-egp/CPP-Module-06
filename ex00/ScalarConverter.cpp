/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:39:04 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/09 20:35:28 by enrgil-p         ###   ########.fr       */
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
//
/*	-	-	DETECT TYPE	-	-	*/
static bool	isChar(const std::string& input)
{
	if (input.length() == 1 && !isdigit(input[0]))
		return true;
	else if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
		return true;
	return false;
}

static bool	isInt(const std::string& input)
{
	unsigned int	length;

	length = input.length();
	for (unsigned int i = 0; i < length; ++i)
	{
		if (i == 0 && (input[i] == '-' || input[i] == '+'))
			++i;
		else if (!isdigit(input[i]))
			return false;
	}
	return true;
}

static bool	isFloatingPoint(const std::string& input, int precision)
{
}

static int	typeDetect(const std::string& input)
{
	if (isChar(input))
		return CHAR;
	if (isInt(input))
		return INT;
	if isFloatingPoint(input, FLOAT)
		return FLOAT;
	if isFloatingPoint(input, DOUBLE)
		return DOUBLE;
	return -1;
}
/*	-	-	CAST	-	-	*/

static void	castOtherTypes(ConversionOutput& output, int index)
{

	switch (index)
	{
		case CHAR:
			char	c;
			
			c = output.getChar();
			output.setInt(static_cast<int>(c));
			output.setCheck(true, INT);
			output.setFloat(static_cast<float>(c));
			output.setCheck(true, FLOAT);
			output.setDouble(static_cast<double>(c));
			output.setCheck(true, DOUBLE);
			break;
		case INT:
			int	i;

			i = output.getInt();
			output.setChar(static_cast<char>(i));
			output.setCheck(true, CHAR);
			output.setFloat(static_cast<float>(i));
			output.setCheck(true, FLOAT);
			output.setDouble(static_cast<double>(i));
			output.setCheck(true, DOUBLE);
			break;
		case FLOAT:
			break;
		case DOUBLE:
			break;
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
			long	preConverted;

			std::stringstream(input) >> preConverted;
			if (preConverted >= std::numeric_limits<int>::min()
				&& preConverted <= std::numeric_limits<int>::max())
			{
				output.setInt(static_cast<int>(preConverted));
				output.setCheck(true, index);
				castOtherTypes(output, index);
			}
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
