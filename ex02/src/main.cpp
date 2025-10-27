/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:48:01 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/10/27 16:04:42 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string brain = "HI THIS IS BRAIN";

	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "The memory address of the string variable: " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR:      " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:      " << &stringREF << std::endl;

	std::cout << "The value of the string variable:  " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

	return (EXIT_SUCCESS);
}
