/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 02:25:01 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/03 16:35:27 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"

Cat::Cat() : Animal()
{ 
	type = "Cat";
	print_msg("A Cat was created");
}

Cat::~Cat() 
{
	print_msg("A Cat was Destruct");
}

Cat::Cat(const Cat &pToCopy) : Animal(pToCopy)
{
	print_msg("A Cat was copied");
	type = pToCopy.type;
}

Cat &Cat::operator=(const Cat &pOther)
{
	if (this != &pOther)
	{
		print_msg("A Cat was Assigned");
		this->type = pOther.type;
	}
	return (*this);
}

void Cat::makeSound() const
{
	print_msg("Meooooooow");
}
