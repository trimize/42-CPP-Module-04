/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:14:13 by trimize           #+#    #+#             */
/*   Updated: 2024/07/17 19:10:50 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	int i = 0;
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &Brain)
{
	std::cout << "Copied Brain !" << std::endl;
	*this = Brain;
}

Brain& Brain::operator=(const Brain &Brain)
{
	int	i;

	i = 0;
	std::cout << "Copy assignment operator called for a Brain" << std::endl;
	if ( this != &Brain )
	{
		while (i < 100)
		{
        		this->ideas[i] = Brain.ideas[i];
			i++;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain killed" << std::endl;
}
