/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:09:07 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/08/25 14:13:01 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

static bool	storeInput(const std::string& input)
{
	/*char	chr;
	int	integer;
	float	flot;
	double	dbl;
*/
	std::cout << input.length() << std::endl;
	//Identify type
	//store it in it's actual type
	//convert to other types WITH CLASS "scalarConverter" !!!!!!!!
	//print all
	return true;
}

int	main(int c, char** v)
{
	if (c == 2)
	{
		if (storeInput(v[1]))
			return 0;
	}
	return 1;
}
