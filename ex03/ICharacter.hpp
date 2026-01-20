/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:31:04 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/16 14:31:24 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include "AMateria.hpp"

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const& getName() const                  = 0;
        virtual void               equip(AMateria* m)               = 0;
        virtual void               unequip(int idx)                 = 0;
        virtual void               use(int idx, ICharacter& target) = 0;
};

#endif // ICHARACTER_HPP