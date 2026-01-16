/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:18:05 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/16 14:35:30 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class AMateria
{
    protected:
        //[...]
    public:
        AMateria(std::string const& type);
        //[...]
        std::string const& getType() const; // Returns the materia type
        virtual AMateria*  clone() const = 0;
        virtual void       use(ICharacter& target);
};


#endif // AMATERIA_HPP