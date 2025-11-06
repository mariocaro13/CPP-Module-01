/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:18:42 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/06 21:21:33 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int	main(int argc, char** argv) {

	if (argc != 2) {
		std::cerr << "USAGE: " << argv[0] << " <DEBUG||INFO||WARNING||ERROR>" << std::endl;
		return (EXIT_FAILURE);
	}

	Harl harl;
	harl.complain(argv[1]);
	return (EXIT_SUCCESS);
}
