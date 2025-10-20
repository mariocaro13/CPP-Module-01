/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:48:57 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/10/20 17:20:50 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void) {
	Zombie* heapZombie = newZombie("Heapster");
	heapZombie->announce();
	delete heapZombie;

	randomChump("Stacky");
	return (EXIT_SUCCESS);
}
