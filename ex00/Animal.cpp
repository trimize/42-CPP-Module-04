/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:13:42 by trimize           #+#    #+#             */
/*   Updated: 2024/05/23 15:42:17 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal &ani)
{
	std::cout << "Copied animal !" << std::endl;
	*this = ani;
}

Animal& Animal::operator=(const Animal &ani)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &ani )
	   this->type = ani.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal killed" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	if (this->type.compare("Dog") != 0 || this->type.compare("Cat") != 0)
		std::cout << "The sound emitted was quite strange..." << std::endl;
}
