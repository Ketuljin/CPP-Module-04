/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 07:20:22 by jkerthe           #+#    #+#             */
/*   Updated: 2025/07/02 09:10:45 by jkerthe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;
        Animal();
        Animal(const Animal& copy);
        Animal& operator=(const Animal& copy);
    public:

        virtual ~Animal();

        virtual void    makeSound()const;
        std::string getType(void)const;
        virtual void    setIdea(int index, std::string idea);
        virtual std::string getIdea(int index )const;
};

#endif