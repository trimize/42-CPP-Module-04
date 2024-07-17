/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:15:25 by trimize           #+#    #+#             */
/*   Updated: 2024/07/17 18:27:13 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		AMateria *materias[4];
	public :
		MateriaSource();
        	MateriaSource(const MateriaSource &ms);
       		MateriaSource &operator=(const MateriaSource &ms);
		~MateriaSource();
       		void learnMateria(AMateria *am);
       		AMateria* createMateria(std::string const & type);
};

#endif