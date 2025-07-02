/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:26:11 by jkerthe           #+#    #+#             */
/*   Updated: 2025/05/15 09:03:31 by jkerthe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
    _type = "WrongCat";
	std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat& src)
{
	if (this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void    WrongCat::makeSound()const
{
    std::cout << "WroooongMeowwww" << std::endl;
}

std::string WrongCat::getType()const
{
    return (_type);
}