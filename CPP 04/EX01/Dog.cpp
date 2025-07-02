/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 07:20:10 by jkerthe           #+#    #+#             */
/*   Updated: 2025/07/02 09:04:56 by jkerthe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->_type = "Dog";
   _brain = new Brain();
	std::cout << "\033[34m"
    << "Dog default constructor" 
    << "\033[0m"
    << std::endl;
}

Dog::~Dog()
{
    delete(_brain);
    std::cout << "\033[34m"
    << "Dog destructor called" 
    << "\033[0m"
    << std::endl;
}

Dog::Dog(const Dog& copy)
{
    *this = copy;
}

Dog &Dog::operator=(const Dog& src)
{
    if (this == &src)
        return *this;
    _type = src._type;
    return *this;
}

void    Dog::makeSound(void)const
{
    std::cout << "\033[34m"
    << "WOOOOOOF" 
    << "\033[0m"
    << std::endl;
}

std::string Dog::getType()const
{
    return (_type);
}

void Dog::setIdea(int index, std::string idea)
{
     _brain->set_idea(index, idea);
}

std::string Dog::getIdea(int index)const
{
    return (_brain->get_idea(index));
}