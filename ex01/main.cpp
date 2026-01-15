/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:31:13 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/15 10:54:58 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    Animal* animals[10];
    for (int i = 0; i < 5; i++)
        animals[i] = new Cat();
    for (int i = 5; i < 10; i++)
        animals[i] = new Dog();

    Animal* testcat = animals[0];

    std::cout << static_cast<Cat*>(testcat)->getBrain() << "\n";
    std::cout << static_cast<Cat*>(animals[0])->getBrain() << "\n";


    for (int i = 0; i < 10; i++)
        delete animals[i];

    delete testcat;

    return 0;
}
