/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:36:20 by teorimize         #+#    #+#             */
/*   Updated: 2024/07/17 17:59:38 by trimize          ###   ########.fr       */
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

void    Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
