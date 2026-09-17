/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 19:14:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/09/17 17:14:05 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& other) {*this = other;}

Serializer&	Serializer::operator=(const Serializer &)
{
	return *this;
}

Serializer::~Serializer() {}

uintptr_t	Serializer::serialize(Data *ptr)
{
	uintptr_t address = reinterpret_cast<uintptr_t>(ptr);
	return address;
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
