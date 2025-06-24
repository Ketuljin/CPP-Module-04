/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 07:20:19 by jkerthe           #+#    #+#             */
/*   Updated: 2025/05/15 08:22:20 by jkerthe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->_type = "Cat";
    std::cout << "Cat default constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& copy): Animal()
{
    *this = copy;
}

Cat &Cat::operator=(const Cat& src)
{
    if (this == &src)
        return *this;
    _type = src._type;
    return *this;
}

void    Cat::makeSound(void)const
{
    std::cout << "Meowwww" << std::endl;
}

std::string Cat::getType()const
{
    return (_type);
}