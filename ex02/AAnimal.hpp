/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:32:19 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/16 11:21:40 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "Brain.hpp"
#include <string>

class AAnimal
{
    public:
        AAnimal();
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal();

        virtual AAnimal* clone(void) const = 0;

        std::string  getType(void) const;
        virtual void makeSound(void) const = 0;
        virtual Brain* getBrain(void) const;

    protected:
        std::string type;
};

#endif // AANIMAL_HPP