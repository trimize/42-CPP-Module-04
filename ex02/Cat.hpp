/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:53:54 by trimize           #+#    #+#             */
/*   Updated: 2024/06/07 15:12:30 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*b;
	public:
		Cat();
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);
		~Cat();
		void	makeSound(void) const;
};

#endif