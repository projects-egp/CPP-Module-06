/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:09:07 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/08 19:25:55 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

static void	print(ConversionOutput obj, int index)
{
	switch (index)
	{
		case CHAR:
			if (obj.getCheck(index) && isprint(obj.getChar()))
				std::cout << "char: '" << obj.getChar() << "'" << std::endl;
			else if (obj.getCheck(index))
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: impossible" << std::endl;
			break;
		case INT:
			if (obj.getCheck(index))
				std::cout << "int: " << obj.getInt() << std::endl;
			else
				std::cout << "int: impossible" << std::endl;
			break;
		case FLOAT:
			if (obj.getCheck(index))
				std::cout << "float: " << obj.getFloat() << std::endl;
			else
				std::cout << "float: impossible" << std::endl;
			break;
		case DOUBLE:
			if (obj.getCheck(index))
				std::cout << "double: " << obj.getDouble() << std::endl;
			else
				std::cout << "double: impossible" << std::endl;
			break;
	}
}

int	main(int c, char** v)
{
	ConversionOutput	converted;
	
	if (c == 2)
	{
		ScalarConverter::convert(v[1], converted);
		for (int i = 0; i < ALL; ++i)
			print(converted, i);
		return 0;
	}
	return 1;
}
