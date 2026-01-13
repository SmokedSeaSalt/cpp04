/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:11:36 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/11 18:13:21 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "terminalOutput.hpp"
#include <iostream>

WrongCat::WrongCat()
{
    std::cout << C_BLUE << "WrongCat popped into existance!\n" << C_END;
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << C_BLUE << "WrongCat popped out of existance!\n" << C_END;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (&other == this)
        return *this;
    WrongAnimal::operator=(other);
    return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << C_GREEN << "The cat says meow!\n" << C_END;
}
