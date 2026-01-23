/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:31:13 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/11 18:15:13 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j    = new Dog();
    const Animal* i    = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* k         = new WrongCat();
    const WrongCat* l         = new WrongCat();
    std::cout << k->getType() << " " << std::endl;
    k->makeSound(); // will not output the cat sound!
    l->makeSound(); // will output the cat sound!
    wrongmeta->makeSound();

    delete wrongmeta;
    delete k;

    return 0;
}
