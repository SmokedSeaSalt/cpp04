/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:16:45 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/16 11:41:41 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "terminalOutput.hpp"
#include <iostream>

Cat::Cat()
{
    std::cout << C_BLUE << "Cat popped into existance!\n" << C_END;
    type = "Cat";
    brain_ = new Brain;
}

Cat::~Cat()
{
    std::cout << C_BLUE << "Cat popped out of existance!\n" << C_END;
    delete brain_;
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
    std::cout << C_BLUE << "Cat is cloned!\n" << C_END;
    brain_ = new Brain(*other.brain_);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << C_BLUE << "Cat data transfer!\n" << C_END;
    if (this == &other)
        return *this;

    AAnimal::operator=(other);
    delete brain_;
    brain_ = new Brain(*other.brain_);
    return *this;
}

Cat* Cat::clone() const
{
    return new Cat(*this);
}


void Cat::makeSound(void) const
{
	std::cout << C_GREEN << "The cat says meow!\n" << C_END;
}

Brain* Cat::getBrain(void) const
{
    return brain_;
}
