/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionOutput.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:20:32 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/08 18:57:24 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionOutput.hpp"
#include "general.hpp"

ConversionOutput::ConversionOutput() : _char(0), _int(0), _float(0), _double(0)
{
	for (int i = 0; i < ALL; ++i)
		_check[i] = false;
}

ConversionOutput::ConversionOutput(const ConversionOutput &other) :
	_char(other._char),
	_int(other._int),
	_float(other._float),
	_double(other._double)
{
	for (int i = 0; i < ALL; ++i)
		this->_check[i] = other._check[i];
}

ConversionOutput&	ConversionOutput::operator=(const ConversionOutput &rhs)
{
	if (this != &rhs)
	{
		this->_char = rhs._char;
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_double = rhs._double;
		for (int i = 0; i < ALL; ++i)
			this->_check[i] = rhs._check[i];

	}	
	return(*this);
}

ConversionOutput::~ConversionOutput() {}

char	ConversionOutput::getChar(void) const		{return _char;}
int	ConversionOutput::getInt(void) const		{return _int;}
float	ConversionOutput::getFloat(void) const		{return _float;}
double	ConversionOutput::getDouble(void) const		{return _double;}
bool	ConversionOutput::getCheck(int index) const	{return _check[index];}

void	ConversionOutput::setChar(char c)	{_char = c;}
void	ConversionOutput::setInt(int i)		{_int = i;}
void	ConversionOutput::setFloat(float f)	{_float = f;}
void	ConversionOutput::setDouble(double d)	{_double = d;}
void	ConversionOutput::setCheck(bool status, int index){
	_check[index] = status;}
