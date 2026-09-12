/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:09:07 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/12 18:13:52 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

int	main(int c, char** v)
{
	ConversionOutput	converted;
	
	if (c == 2)
	{
		ScalarConverter::convert(v[1], converted);
		for (int type = CHAR; type < ALL; ++type)
			converted.print(type);
		return 0;
	}
	std::cerr << "Error: expected one argument" << std::endl;
	return 1;
}
