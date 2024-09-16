/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:57:12 by trimize           #+#    #+#             */
/*   Updated: 2024/06/07 15:04:32 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ani)
{
	std::cout << "Copied WrongAnimal !" << std::endl;
	if ( this != &ani )
	   this->type = ani.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ani)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &ani )
	   this->type = ani.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal killed" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "The sound emitted was quite strange..." << std::endl;
}
