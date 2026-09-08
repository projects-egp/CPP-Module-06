/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionOutput.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:31:51 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/08 17:14:07 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONOUTPUT_HPP
# define CONVERSIONOUTPUT_HPP

class ConversionOutput
{
	public:
		enum	_enumCheck {CHAR, INT, FLOAT, DOUBLE, ALL};
		//
		ConversionOutput();
		ConversionOutput(const ConversionOutput &);
		ConversionOutput&	operator=(const ConversionOutput &);
		~ConversionOutput();
		//
		char	getChar(void);
		int	getInt(void);
		float	getFloat(void);
		double	getDouble(void);
		bool	getCheck(int index);
		//
		void	setChar(char c);
		void	setInt(int i);
		void	setFloat(float f);
		void	setDouble(double d);
		void	setCheck(bool status, int index);

	protected:
	private:
		char	_char;
		int	_int;
		float	_float;
		double	_double;
		bool	_check[ALL];
};

#endif
