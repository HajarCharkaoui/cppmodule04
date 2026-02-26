/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:51:26 by hacharka          #+#    #+#             */
/*   Updated: 2026/02/26 15:41:23 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main()
{
    const int size = 4;
    Animal* shelter[size];

    // 1. Creer Array: nuss klab, nuss mchach
    std::cout << "--- CREATING SHELTER ---" << std::endl;
	for (int i = 0; i < size / 2; i++)
		shelter[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		shelter[i] = new Cat();

	std::cout << "\n--- TESTING DEEP COPY ---" << std::endl;
	Cat basic;
	{
		Cat tmp = basic;
	}

	std::cout << "Basic is still alive after tmp is destroyed!" << std::endl;

	std::cout << "\n--- CLEANING UP ---" << std::endl;
	for (int i = 0; i < size; i++)
		delete shelter[i];

	return 0;
}