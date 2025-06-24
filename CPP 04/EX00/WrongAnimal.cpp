/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:26:05 by jkerthe           #+#    #+#             */
/*   Updated: 2025/05/15 08:45:51 by jkerthe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("default")
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& src)
{
	if (this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void    WrongAnimal::makeSound()const
{
    std::cout << "Does a weird sound" << std::endl;
}

std::string WrongAnimal::getType()const
{
    return (_type);
}
