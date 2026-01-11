/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:37:57 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/11 18:07:50 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "terminalOutput.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
    std::cout << C_BLUE << "Animal popped into existance!\n" << C_END;
    type = "Animal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << C_BLUE << "Animal popped out of existance!\n" << C_END;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (&other == this)
        return *this;
    type = other.type;
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << C_RED
              << "The unknown animal just stands there... looking at you... saying nothing...\n"
              << C_END;
}