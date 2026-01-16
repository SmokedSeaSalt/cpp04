/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-rij <mvan-rij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:31:13 by mvan-rij          #+#    #+#             */
/*   Updated: 2026/01/16 11:41:41 by mvan-rij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    AAnimal* cat = new Cat();
    AAnimal* dog = new Dog();
    //AAnimal* aanimal = new AAnimal();



    delete cat;
    delete dog;
    //delete aanimal;
}
