/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 02:07:13 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/30 02:43:18 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	~Dog();

	Dog(const Dog &pToCopy);
	Dog& operator=(const Dog &pOther);

	virtual void 		makeSound() const;
};

#endif