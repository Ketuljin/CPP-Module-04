/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 07:20:19 by jkerthe           #+#    #+#             */
/*   Updated: 2025/07/02 09:01:37 by jkerthe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->_type = "Cat";
    _brain = new Brain();
    std::cout << "\033[32m"
    << "Cat default constructor" 
    << "\033[0m"
    << std::endl;
}

Cat::~Cat()
{
    delete(_brain);
    std::cout << "\033[32m"
    << "Cat destructor called" 
    << "\033[0m"
    << std::endl;
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
    std::cout << "\033[32m"
    << "Meowwww" 
    << "\033[0m"
    << std::endl;
}

std::string Cat::getType()const
{
    return (_type);
}

void Cat::setIdea(int index, std::string idea)
{
     _brain->set_idea(index, idea);
}

std::string Cat::getIdea(int index)const
{
    return (_brain->get_idea(index));
}