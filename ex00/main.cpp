/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:09:07 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/23 13:53:03 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

int	main(int c, char** v)
{
	if (c == 2)
	{
		ScalarConverter::convert(v[1]);
		return 0;
	}
	std::cerr << "Error: expected one argument" << std::endl;
	return 1;
}
