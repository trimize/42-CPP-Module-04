/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:59:08 by teorimize         #+#    #+#             */
/*   Updated: 2024/07/17 16:37:32 by teorimize        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria &am)
{
    *this = am;
}

AMateria	&AMateria::operator=(const AMateria &am)
{
	this->type = am.getType();
	return (*this);
}

AMateria::~AMateria()
{

}

std::string const &AMateria::getType() const
{
    return(this->type);
}

AMateria    *AMateria::clone() const
{
    return (AMateria *)this;
}

void    AMateria::use(ICharacter &target)
{
    
}