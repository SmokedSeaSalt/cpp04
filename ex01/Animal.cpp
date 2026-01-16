/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:32:17 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/16 10:51:19 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "terminalOutput.hpp"
#include <iostream>

Animal::Animal()
{
    std::cout << C_BLUE << "Animal popped into existance!\n" << C_END;
    type = "Animal";
}

Animal::~Animal()
{
    std::cout << C_BLUE << "Animal popped out of existance!\n" << C_END;
}

Animal::Animal(const Animal& other)
{
    type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
    if (&other == this)
        return *this;
    type = other.type;
    return *this;
}

std::string Animal::getType(void) const
{
    return type;
}

void Animal::makeSound(void) const
{
    std::cout << C_RED
              << "The unknown animal just stands there... looking at you... saying nothing...\n"
              << C_END;
}

Brain* Animal::getBrain() const
{
    std::cout << C_RED
              << "No brain found!\n"
              << C_END;
    return nullptr;
}

Animal* Animal::clone(void) const
{
    return new Animal(*this);
}
