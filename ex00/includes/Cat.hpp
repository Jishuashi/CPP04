/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 02:06:26 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/30 02:43:03 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	~Cat();

	Cat(const Cat &pToCopy);
	Cat& operator=(const Cat &pOther);

	virtual void 		makeSound() const;
};

#endif