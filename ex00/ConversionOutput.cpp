/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionOutput.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:20:32 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/08/31 22:41:11 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionOutput.hpp"

ConversionOutput::ConversionOutput() : _char(0), _int(0), _float(0), _double(0)
{
	for (int i = 0; i < ALL; ++i)
		_check[i] = false;
}

ConversionOutput::ConversionOutput(const ConversionOutput &other) :
	_char(other._char),
	_int(other._int),
	_float(other._float),
	_double(other._double) {}

ConversionOutput&	ConversionOutput::operator=(const ConversionOutput &rhs)
{
	if (this != &rhs)
	{
		this->_char = rhs._char;
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_double = rhs._double;
	}	
	return(*this);
}

ConversionOutput::~ConversionOutput() {}
