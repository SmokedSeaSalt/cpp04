/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:16:45 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/11 17:31:24 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "terminalOutput.hpp"
#include <iostream>

Cat::Cat()
{
    std::cout << C_BLUE << "Cat popped into existance!\n" << C_END;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << C_BLUE << "Cat popped out of existance!\n" << C_END;
}

Cat::Cat(const Cat& other)
{
    // arbitrary for this exersise, should ideally be prototype pattern(clone)
    // will call Animal->makeSound();
    type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
    // arbitrary for this exersise
    if (&other == this)
        return *this;
    type = other.type;
    return *this;
}

void Cat::makeSound(void) const
{
	std::cout << C_GREEN << "The cat says meow!\n" << C_END;
}