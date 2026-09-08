/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:09:07 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/08 17:32:56 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

static void	print(ConversionOutput obj, int index)
{
	std::string	typeToPrint;
	void*		type = NULL;

	switch (index)
	{
		case CHAR:
			typeToPrint = "char: ";
			if (obj.getCheck(index))
			       type = /*pointer of obj._char*/;
			break;
		case INT:
			break;
		case FLOAT:
			break;
		case DOUBLE:
			break;
	}
	if (type == NULL)
		std::cout << typeToPrint << "impossible" << std::endl;
	else if (typeToPrint.compare("char: ") == 0 && /*cast void* to char, and check if it i printable*/)
		std::cout << typeToPrint << "Non displayable" << std::endl;
	else
		std::cout << typeToPrint << *type << std::endl;
}

int	main(int c, char** v)
{
	ConversionOutput	converted;
	
	if (c == 2)
	{
		ScalarConverter::convert(v[1], converted);
		for (int i = 0; i < ALL; ++i;)
			print(converted, i);
		return 0;
	}
	return 1;
}
