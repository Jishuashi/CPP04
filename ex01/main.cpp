/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 02:00:27 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/03 18:53:20 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/polymorph.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	{
		Animal*	animalList[10];
		int		i = 0;

		while (i < 10)
		{
			if ((i % 2) == 0)
				animalList[i] = new Dog();
			else
				animalList[i] = new Cat();
			i++;
		}
		i = 0;
		while (i < 10)
		{
			print_msg(animalList[i]->getType());
			animalList[i]->makeSound();
			delete animalList[i];
			i++;
		}	
	}
	return (0);
}