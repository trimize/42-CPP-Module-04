/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:44:52 by teorimize         #+#    #+#             */
/*   Updated: 2024/07/17 17:03:15 by teorimize        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    for(int i; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

Character::Character(const Character &c)
{
    *this = c;
}

Character	&Character::operator=(const Character &c)
{
    this->name = c.getName();
    for(int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    for(int y = 0; y < 4; y++)
    {
        if (c.inventory[y])
            this->inventory[y] = c.inventory[y]->clone();
    }
	return (*this);
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}
std::string const &Character::getName() const
{
    return (this->name);
}

void    Character::equip(AMateria *m)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m->clone();
            return ;
        }
        i++;
    }
}

void    Character::unequip(int idx)
{
    if (this->inventory[idx])
        this->inventory[idx] = NULL;
}

void    Character::use(int idx, Character &target)
{
    if (this->inventory[idx]->getType() == "ice")
        std::cout << "* shoots an ice bolt at " + target.getName() + " *";
    else if (this->inventory[idx]->getType() == "cure")
        std::cout << "* heals " + target.getName() + "'s wounds";
}