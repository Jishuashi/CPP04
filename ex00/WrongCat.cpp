/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 16:46:38 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/03 16:55:04 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{ 
	type = "WrongCat";
	print_msg("A WrongCat was created");
}

WrongCat::~WrongCat() 
{
	print_msg("A WrongCat was Destruct");
}

WrongCat::WrongCat(const WrongCat &pToCopy) : WrongAnimal(pToCopy)
{
	print_msg("A WrongCat was copied");
	type = pToCopy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &pOther)
{
	if (this != &pOther)
	{
		print_msg("A WrongCat was Assigned");
		this->type = pOther.type;
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	print_msg("Meooooooow");
}
