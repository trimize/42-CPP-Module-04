/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:44:52 by teorimize         #+#    #+#             */
/*   Updated: 2024/07/17 18:22:52 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    for(int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
    
}

Character::Character(std::string name)
{
    for(int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
    this->name = name;
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

void    Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || !this->inventory[idx])
		return ;
	this->inventory[idx]->use(target);
}