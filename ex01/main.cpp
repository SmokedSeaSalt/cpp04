/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:31:13 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/16 10:57:46 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    Animal* animals[10];
    for (int i = 0; i < 3; i++)
        animals[i] = new Cat();
    for (int i = 3; i < 6; i++)
        animals[i] = new Dog();

    Animal* testcat = animals[0]->clone();

    std::cout << testcat->getBrain() << "\n";
    std::cout << animals[0]->getBrain() << "\n";

    for (int i = 0; i < 6; i++)
        delete animals[i];

    delete testcat;

    return 0;
}
