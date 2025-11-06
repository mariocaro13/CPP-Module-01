/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:13:02 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/06 21:00:07 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <cstdlib>

int main(int argc, char** argv) {
	if (argc != 3) {
		std::cerr << "Usage: " << argv[0] << " <number_of_zombies> <zombie_name>" << std::endl;
		return (EXIT_FAILURE);
	}

	int	hordeSize = std::atoi(argv[1]);
	std::string name = argv[2];

	if (hordeSize <= 0 || hordeSize > 9999999) {
		std::cerr << "Error: <number_of_zombies> must be between 0 and 1,000,000." << std::endl;
		return (EXIT_FAILURE);
	}
	
	Zombie* horde = zombieHorde(hordeSize, name);
	if (!horde)
		return (EXIT_FAILURE);
	
	for (int i = 0; i < hordeSize; i++)
		horde[i].announce();

	delete[] horde;
	return (EXIT_SUCCESS);
}
