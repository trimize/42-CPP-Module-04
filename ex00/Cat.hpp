/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:53:54 by trimize           #+#    #+#             */
/*   Updated: 2024/06/07 14:46:09 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:
		Cat();
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);
		~Cat();
		void	makeSound(void) const;
};

#endif