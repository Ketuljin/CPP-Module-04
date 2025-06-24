/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 07:20:10 by jkerthe           #+#    #+#             */
/*   Updated: 2025/05/15 08:22:44 by jkerthe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->_type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
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
    std::cout << "WOOOOOOF" << std::endl;
}

std::string Dog::getType()const
{
    return (_type);
}