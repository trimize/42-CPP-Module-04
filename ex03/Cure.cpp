/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:36:20 by teorimize         #+#    #+#             */
/*   Updated: 2024/07/17 16:25:04 by teorimize        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
}

Cure::Cure(const Cure &c)
{
    *this = c;
}

Cure	&Cure::operator=(const Cure &c)
{
    this->type = c.getType();
	return (*this);
}

Cure::~Cure()
{

}

Cure    *Cure::clone() const
{
    return (new Cure(*this));
}


