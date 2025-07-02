/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 07:20:25 by jkerthe           #+#    #+#             */
/*   Updated: 2025/07/02 08:59:47 by jkerthe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("default")
{
	std::cout << "\033[31m"
	<< "Animal default constructor" 
	<< "\033[0m"
	<< std::endl;
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
	std::cout << "\033[31m"
	<< "Animal destructor called" 
	<< "\033[0m"
	<< std::endl;
}

void	Animal::makeSound(void)const
{
	std::cout << "\033[31m"
	<< "Doesn't make any sound" 
	<< "\033[0m"
	<< std::endl;
}

std::string	Animal::getType(void)const
{
	return (this->_type);
}

void	Animal::setIdea(int index, std::string idea)
{
	(void) index;
	(void) idea;
	std::cout << "\033[31m"
	<< "Doesn't have a brain" 
	<< "\033[0m"
	<< std::endl;
}

std::string	Animal::getIdea(int index)const
{
	(void) index;
	return ("I got not idea");
}