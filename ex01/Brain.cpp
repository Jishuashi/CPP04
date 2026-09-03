/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:26:35 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/03 18:57:45 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.hpp"

Brain::Brain()
{
	print_msg("A Brain was created");
}

Brain::~Brain()
{
	print_msg("A Brain was destruct");
}

Brain::Brain(const Brain &pToCopy)
{
	print_msg("A Brain was copied");
	for (size_t i = 0; i < ideas->length(); i++)
			this->ideas[i] = pToCopy.ideas[i];
}

Brain& Brain::operator=(const Brain &pOther)
{
	print_msg("A Brain was assigned");
	if (this != &pOther)
	{
		for (size_t i = 0; i < ideas->length(); i++)
			this->ideas[i] = pOther.ideas[i];
	}
	return (*this);
}