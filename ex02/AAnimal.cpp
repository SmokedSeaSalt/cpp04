/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:32:17 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/16 11:22:36 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "terminalOutput.hpp"
#include <iostream>

AAnimal::AAnimal()
{
    std::cout << C_BLUE << "AAnimal popped into existance!\n" << C_END;
    type = "AAnimal";
}

AAnimal::~AAnimal()
{
    std::cout << C_BLUE << "AAnimal popped out of existance!\n" << C_END;
}

AAnimal::AAnimal(const AAnimal& other)
{
    type = other.type;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (&other == this)
        return *this;
    type = other.type;
    return *this;
}

std::string AAnimal::getType(void) const
{
    return type;
}

void AAnimal::makeSound(void) const
{
    std::cout << C_RED
              << "The unknown aanimal just stands there... looking at you... saying nothing...\n"
              << C_END;
}

Brain* AAnimal::getBrain() const
{
    std::cout << C_RED
              << "No brain found!\n"
              << C_END;
    return nullptr;
}