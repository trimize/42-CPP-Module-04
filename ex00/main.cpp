/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:13:34 by trimize           #+#    #+#             */
/*   Updated: 2024/09/17 15:23:31 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Cat	u;
	const Cat	x(u);
	//const WrongAnimal* w = new WrongCat();
	std::cout << x.getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	//std::cout << w->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	//w->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	//delete w;
	
	return 0;
}
