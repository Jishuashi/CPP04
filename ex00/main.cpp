/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 02:00:27 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/03 17:00:40 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/polymorph.hpp"

int main()
{
	{
		std::cout << "\033[33m" << "From Subject\n"<< "\033[0m";
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << "\033[33m" << "Cat Sound\n"<< "\033[0m";
		i->makeSound();
		std::cout << "\033[33m" << "Dog Sound\n"<< "\033[0m";
		j->makeSound();
		std::cout << "\033[33m" << "Animal Sound\n"<< "\033[0m";
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << "\033[33m" << "From Me\n"<< "\033[0m";
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		const WrongCat* j = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		std::cout << "\033[33m" << "Cat Animal Sound\n"<< "\033[0m";
		i->makeSound();
		std::cout << "\033[33m" << "Cat Sound\n"<< "\033[0m";
		j->makeSound();
		std::cout << "\033[33m" << "Animal Sound\n"<< "\033[0m";
		meta->makeSound();

		delete meta;
		delete i;
	}
	return (0);
}