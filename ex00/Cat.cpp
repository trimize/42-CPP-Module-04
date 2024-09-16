/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:14:14 by trimize           #+#    #+#             */
/*   Updated: 2024/09/16 14:59:16 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Copied Cat !" << std::endl;
	*this = cat;
}

Cat& Cat::operator=(const Cat &cat)
{
	std::cout << "Copy assignment operator called for a Cat" << std::endl;
	(void)cat;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat killed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow !" << std::endl;
}
