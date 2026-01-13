/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:32:19 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/11 17:26:55 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
    public:
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();

        std::string  getType(void) const;
        virtual void makeSound(void) const;

    protected:
        std::string type;
};

#endif // ANIMAL_HPP