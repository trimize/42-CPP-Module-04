/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:13:34 by trimize           #+#    #+#             */
/*   Updated: 2024/09/16 15:10:41 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal* a[10];
	//Animal *b = new Animal();
	int	i;

	i = 0;
	//b->makeSound();
	while (i < 5)
		a[i++] = new Cat();
	while (i < 10)
		a[i++] = new Dog();
	i = 0;
	while (i < 10)
		delete a[i++];
	return 0;
}
