/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 16:40:44 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/03 18:54:35 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"

Animal::Animal()
{
	print_msg("An Animal was created");
}

Animal::~Animal() 
{
	print_msg("An Animal was destruct");
}

Animal::Animal(const Animal &pToCopy)
{
	print_msg("An Animal was Copied");
	type = pToCopy.type;
	brain = pToCopy.brain;
}

Animal &Animal::operator=(const Animal &pOther)
{
	print_msg("An Animal was Assigned");
	if (this != &pOther)
	{
		this->type = pOther.type;
		this->brain = pOther.brain;
	}
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	print_msg("This animal doesn't make a sound");
}
