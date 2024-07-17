/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:54:17 by teorimize         #+#    #+#             */
/*   Updated: 2024/07/17 16:25:32 by teorimize        ###   ########.fr       */
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
