/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkerthe <jkerthe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 07:05:55 by jkerthe           #+#    #+#             */
/*   Updated: 2025/07/02 08:20:20 by jkerthe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef BRAIN_HPP
#define BRAIN_HPP


class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain& copy);
        Brain& operator=(const Brain& src);
        
        void set_idea(int index, const std::string idea);
        std::string get_idea(int index);
};

#endif