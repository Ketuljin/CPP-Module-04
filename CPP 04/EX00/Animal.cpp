/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 07:20:25 by jkerthe           #+#    #+#             */
/*   Updated: 2025/05/15 08:13:39 by jkerthe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("default")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
}

Animal &Animal::operator=(const Animal& src)
{
	if (this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void)const
{
	std::cout << "Doesn't make any sound" << std::endl;
}

std::string	Animal::getType(void)const
{
	return (this->_type);
}