/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 07:20:03 by jkerthe           #+#    #+#             */
/*   Updated: 2025/07/02 09:02:45 by jkerthe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Animal* i = new Cat();
    Animal* j = new Dog();
    int index = 10;
    Animal* tab[index];

    for (int i = 0; i <= index; ++i)
    {
        if (i % 2 == 0)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }
    std::cout << std::endl << std::endl << std::endl;
    for (int i = 0; i <= index; ++i)
        tab[i]->makeSound();
    std::cout << std::endl << std::endl << std::endl;
    for (int i = 0; i <= index; ++i)
        delete(tab[i]); 
    j->setIdea(0, "hello");
    i->setIdea(0, "hi");
    std::cout << i->getIdea(0) << " "<< std::endl;
    std::cout << j->getIdea(0) << " " << std::endl;
    delete i;
    delete j;
    return 0;
}