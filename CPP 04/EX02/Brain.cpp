/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 07:05:59 by jkerthe           #+#    #+#             */
/*   Updated: 2025/07/02 07:49:42 by jkerthe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    for (int i = 0; i < 100; ++i)
        _ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(const Brain& src)
{
    if (this != &src) {
        for (int i = 0; i < 100; ++i)
            _ideas[i] = src._ideas[i];
    }
    return *this;
}

void Brain::set_idea(int index, const std::string idea)
{
    if (index >= 0 && index < 100)
        _ideas[index] = idea;
}

std::string Brain::get_idea(int index)
{
    if (index >= 0 && index < 100)
        return (_ideas[index]);
    return (NULL);
}