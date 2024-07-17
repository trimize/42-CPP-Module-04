/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:59:08 by teorimize         #+#    #+#             */
/*   Updated: 2024/07/17 18:02:41 by trimize          ###   ########.fr       */
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

void    AMateria::use(ICharacter &target)
{
    std::cout << "AMateria " << this->getType() << " used on " << target.getName() << std::endl;
}