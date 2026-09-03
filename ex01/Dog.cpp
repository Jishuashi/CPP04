/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 02:25:01 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/03 18:56:55 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"

Dog::Dog() : Animal()
{ 
	type = "Dog";
	brain = new Brain();
	print_msg("A Dog was created");
}

Dog::~Dog() 
{
	print_msg("A Dog was Destruct");
	delete brain;
}

Dog::Dog(const Dog &pToCopy) : Animal(pToCopy)
{
	print_msg("A Dog was copied");
	type = pToCopy.type;
}

Dog &Dog::operator=(const Dog &pOther)
{
	if (this != &pOther)
	{
		print_msg("A Dog was Assigned");
		this->type = pOther.type;
	}
	return (*this);
}

void Dog::makeSound() const
{
	print_msg("Woooooooooooof");
}
