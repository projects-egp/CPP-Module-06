/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:39:04 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/10 19:06:50 by enrgil-p         ###   ########.fr       */
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

static bool	isNumberType(const std::string& input, int precision)
{
	unsigned int	length;
	bool		pointFound = false;

	//HOW DETECT NAN, NANF, NANFF & co.?????!?!?!?!
	length = input.length();
	for (unsigned int i = 0; i < length; ++i)
	{
		if (i == 0 && (input[i] == '-' || input[i] == '+'))
			continue;
		if ((i + 1) == length && precision == FLOAT
			&& input[i] == 'f' && pointFound)
			break;
		if (precision != INT && input[i] == '.' && !pointFound)
		{
			pointFound = true;
			continue;
		}
		if (!isdigit(input[i]))
			return false;
	}
	return true;
}

static int	typeDetect(const std::string& input)
{
	if (isChar(input))
		return CHAR;
	if (isNumberType(input, INT))
		return INT;
	if (isNumberType(input, DOUBLE))
		return DOUBLE;
	if (isNumberType(input, FLOAT))
		return FLOAT;
	return -1;
}
//
//
//
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
			float	f;

			f = output.getFloat();
			output.setChar(static_cast<char>(f));
			output.setCheck(true, CHAR);
			output.setInt(static_cast<int>(f));
			output.setCheck(true, INT);
			output.setDouble(static_cast<double>(f));
			output.setCheck(true, DOUBLE);
			break;
		case DOUBLE:
			double	d;
			
			d = output.getDouble();
			output.setChar(static_cast<char>(d));
			output.setCheck(true, CHAR);
			output.setInt(static_cast<int>(d));
			output.setCheck(true, INT);
			output.setFloat(static_cast<float>(d));
			output.setCheck(true, FLOAT);
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
			long	preConvertedToInt;

			std::stringstream(input) >> preConvertedToInt;
			if (preConvertedToInt >= std::numeric_limits<int>::min() && preConvertedToInt <= std::numeric_limits<int>::max())
			{
				output.setInt(static_cast<int>(preConvertedToInt));
				output.setCheck(true, index);
				castOtherTypes(output, index);
			}
			break;
		case FLOAT:
			double	preConvertedToFloat;
			
			std::stringstream(input) >> preConvertedToFloat;
			if (preConvertedToFloat >= std::numeric_limits<float>::lowest()
				&& preConvertedToFloat <= std::numeric_limits<float>::max())
			{
				output.setFloat(preConvertedToFloat);
				output.setCheck(true, index);
				castOtherTypes(output, index);
			}
			break;
		case DOUBLE:
			long double	preConvertedToDouble;

			std::stringstream(input) >> preConvertedToDouble;
			if (preConvertedToDouble >= std::numeric_limits<double>::min()
				&& preConvertedToDouble <= std::numeric_limits<double>::max())
			output.setDouble(preConvertedToDouble);
			output.setCheck(true, index);
			castOtherTypes(output, index);
			break;
		default:
			return;
	}
}
