/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:14:14 by trimize           #+#    #+#             */
/*   Updated: 2024/09/16 15:09:05 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat")
{
	this->b = new Brain();
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	this->b = new Brain();
	(void)cat;
	std::cout << "Copied Cat !" << std::endl;
}

Cat& Cat::operator=(const Cat &cat)
{
	std::cout << "Copy assignment operator called for a Cat" << std::endl;
	(void)cat;
	return (*this);
}

Cat::~Cat()
{
	delete this->b;
	std::cout << "Cat killed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow !" << std::endl;
}
