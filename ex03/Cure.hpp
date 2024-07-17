/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:41:29 by teorimize         #+#    #+#             */
/*   Updated: 2024/07/17 14:50:47 by teorimize        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "./AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure();
	Cure(const Cure &c);
        Cure &operator=(const Cure &c);
	~Cure();
        Cure* clone() const;
	void use(ICharacter& target);
};

#endif
