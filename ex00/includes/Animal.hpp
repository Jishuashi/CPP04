/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 02:02:57 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/03 16:49:24 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include "utils.hpp"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();

	Animal(const Animal &pToCopy);
	Animal& operator=(const Animal &pOther);

	std::string getType() const;
	virtual void makeSound() const;
};

#endif