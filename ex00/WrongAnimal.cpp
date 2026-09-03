/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 16:36:06 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/03 16:40:55 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{ 
	print_msg("An WrongAnimal was created");
}

WrongAnimal::~WrongAnimal() { }

WrongAnimal::WrongAnimal(const WrongAnimal &pToCopy)
{
	type = pToCopy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &pOther)
{
	if (this != &pOther)
	{
		this->type = pOther.type;
	}
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	print_msg("This WrongAnimal doesn't make a sound");
}