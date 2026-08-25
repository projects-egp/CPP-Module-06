/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:39:04 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/08/25 17:35:49 by enrgil-p         ###   ########.fr       */
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

static void	ScalarConverter::convert(const std::string& input)
{
	t_types	types;

	//Detect type
	//Convert string to that type
	//From converted type, convert to other types
	//Print all
}
