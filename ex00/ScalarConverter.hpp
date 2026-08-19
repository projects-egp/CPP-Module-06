/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:02:47 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/08/19 19:52:14 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>

class ScalarConverter
{
	public:
		static void	convert(const std::string& input);
	protected:
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &);
		ScalarConverter&	operator=(const ScalarConverter &);
		~ScalarConverter();
};

#endif
