/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:23:24 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/11 17:31:38 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "terminalOutput.hpp"
#include <iostream>

Dog::Dog()
{
    std::cout << C_BLUE << "Dog popped into existance!\n" << C_END;
    type = "Dog";
    brain_ = new Brain;
}

Dog::~Dog()
{
    std::cout << C_BLUE << "Dog popped out of existance!\n" << C_END;
    delete brain_;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    brain_ = new Brain(*other.brain_);
}

Dog& Dog::operator=(const Dog& other)
{
    if (this == &other)
        return *this;

    Animal::operator=(other);
    delete brain_;
    brain_ = new Brain(*other.brain_);
    return *this;
}

void Dog::makeSound(void) const
{
	std::cout << C_GREEN << "The dog goes woof!\n" << C_END;
}
