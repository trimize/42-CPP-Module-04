/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:53:54 by trimize           #+#    #+#             */
/*   Updated: 2024/06/07 14:54:41 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &ani);
		Animal &operator=(const Animal &ani);
		virtual ~Animal();
		virtual void	makeSound() const;
		std::string	getType(void) const;
};

#endif