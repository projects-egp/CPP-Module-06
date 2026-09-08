/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:09:07 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/08 18:16:34 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

static void	print(ConversionOutput obj, int index)
{
	switch (index)
	{
		case 1:
			if (obj.getCheck(index) && isprint(obj.getChar()))
				std::cout << "char: " << obj.getChar() << std::endl;
			else if (obj.getCheck(index))
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: impossible" << std::endl;
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

int	main(int c, char** v)
{
	ConversionOutput	converted;
	
	if (c == 2)
	{
		ScalarConverter::convert(v[1], converted);
		for (int i = 1; i <= ALL; ++i)
			print(converted, i);
		return 0;
	}
	return 1;
}
