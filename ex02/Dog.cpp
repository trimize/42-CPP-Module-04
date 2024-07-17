/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:16:46 by trimize           #+#    #+#             */
/*   Updated: 2024/07/17 19:11:54 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->b = new Brain();
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &Dog) : b()
{
	std::cout << "Copied Dog !" << std::endl;
	*this = Dog;
}

Dog& Dog::operator=(const Dog &dog)
{
	std::cout << "Copy assignment operator called for a Dog" << std::endl;
	if ( this != &dog )
        	this->type = dog.type;
	return (*this);
}

Dog::~Dog()
{
	delete this->b;
	std::cout << "Dog killed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof !" << std::endl;
}
