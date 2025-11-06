/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:18:42 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/06 20:23:03 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char** argv) {

	if (argc != 2) {
		std::cerr << "USAGE: " << argv[0] << " <DEBUG||INFO||WARNING||ERROR>" << std::endl;
		return (EXIT_FAILURE);
	}

	Harl harl;
	harl.complain(argv[1]);
}
