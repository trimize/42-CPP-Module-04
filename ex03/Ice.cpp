/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:54:17 by teorimize         #+#    #+#             */
/*   Updated: 2024/07/17 17:59:25 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
}

Ice::Ice(const Ice &i)
{
    *this = i;
}

Ice	&Ice::operator=(const Ice &i)
{
    this->type = i.getType();
	return (*this);
}

Ice::~Ice()
{
    
}

Ice    *Ice::clone() const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
