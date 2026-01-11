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
}

Dog::~Dog()
{
    std::cout << C_BLUE << "Dog popped out of existance!\n" << C_END;
}

Dog::Dog(const Dog& other)
{
    // arbitrary for this exersise, should ideally be prototype pattern(clone)
    // will call Animal->makeSound();
    type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
    // arbitrary for this exersise
    if (&other == this)
        return *this;
    type = other.type;
    return *this;
}

void Dog::makeSound(void) const
{
	std::cout << C_GREEN << "The dog goes woof!\n" << C_END;
}