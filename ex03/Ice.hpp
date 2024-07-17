/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:41:29 by teorimize         #+#    #+#             */
/*   Updated: 2024/07/17 15:56:48 by teorimize        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "./AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();
		Ice(const Ice &i);
        Ice &operator=(const Ice &i);
		~Ice();
        Ice* clone() const;
};

#endif