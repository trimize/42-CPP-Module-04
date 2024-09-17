/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:16:46 by trimize           #+#    #+#             */
/*   Updated: 2024/09/17 15:24:29 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &Dog) : Animal("Dog")
{
	std::cout << "Copied Dog !" << std::endl;
	(void)Dog;
}

Dog& Dog::operator=(const Dog &dog)
{
	std::cout << "Copy assignment operator called for a Dog" << std::endl;
	(void)dog;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog killed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof !" << std::endl;
}
