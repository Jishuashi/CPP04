/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 16:39:09 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/03 16:59:54 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include "utils.hpp"

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();

	WrongAnimal(const WrongAnimal &pToCopy);
	WrongAnimal& operator=(const WrongAnimal &pOther);

	std::string getType() const;
	void makeSound() const;
};

#endif