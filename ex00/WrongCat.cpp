/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:59:36 by trimize           #+#    #+#             */
/*   Updated: 2024/06/07 15:00:09 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat) : WrongAnimal("WrongCat")
{
	std::cout << "Copied WrongCat !" << std::endl;
	(void)WrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat &WrongCat)
{
	std::cout << "Copy assignment operator called for a WrongCat" << std::endl;
	(void)WrongCat;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat killed" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow !" << std::endl;
}
