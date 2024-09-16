/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:19:53 by trimize           #+#    #+#             */
/*   Updated: 2024/09/16 12:56:14 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
        	this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &ms)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		if (ms.materias[i])
			this->materias[i] = ms.materias[i]->clone();
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &ms)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		if (ms.materias[i])
			this->materias[i] = ms.materias[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
}

void	MateriaSource::learnMateria(AMateria *am)
{
	for(int y = 0; y < 4; y++)
	{
		if (!this->materias[y])
		{
			this->materias[y] = am;
			return ;	
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;

	i = 0;
	if (type == "ice" || type == "cure")
	{
		for(int y = 0; y < 4; y++)
		{
			if (this->materias[y] && this->materias[y]->getType() == type)
				i = y;
			
		}
		if (i == 0 && !this->materias[0])
			return (0);
		else
			return (this->materias[i]);
	}
	else
		return (0);
}
