/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 02:06:26 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/03 18:57:15 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	~Cat();

	Cat(const Cat &pToCopy);
	Cat& operator=(const Cat &pOther);

	virtual void 		makeSound() const;
};

#endif