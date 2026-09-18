/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 02:00:27 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/18 18:29:29 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/polymorph.hpp"

int main()
{
	{
		print_msg("\033[0;32mSubject test\033[0m");
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	{
		print_msg("\n\n\033[0;32mOwn test\033[0m");
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
			i++;
		}
		i = 0;
		while (i < 10)
		{
			delete animalList[i];
			i++;
		}
	}
	{
    	print_msg("\n\n\033[0;32mAssignment test\033[0m");
    	Dog a;
    	Dog b;
    	b = a;
    	std::cout << "a type: " << a.getType() << std::endl;
    	std::cout << "b type: " << b.getType() << std::endl;
	} 
	{
		print_msg("\n\n\033[0;32mDeep Copy test\033[0m");
		Dog basic;

    	{
        	Dog tmp = basic;
        	std::cout << "tmp type: " << tmp.getType() << std::endl;
    	}
   		std::cout << "basic type: " << basic.getType() << std::endl;
	}
	return (0);
}