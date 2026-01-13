/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:22:53 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/11 17:26:13 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();

        void makeSound(void) const;

    private:
        Brain* brain_;
};

#endif // DOG_HPP
