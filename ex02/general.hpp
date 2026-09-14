/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 22:20:42 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/14 18:20:32 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERAL_HPP
# define GENERAL_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
