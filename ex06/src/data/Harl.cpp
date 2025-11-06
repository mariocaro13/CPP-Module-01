/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:04:03 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/06 21:30:23 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "harl_messages.hpp"

Harl::Harl(void) {}

Harl::Harl(const Harl& other) {
	(void)other;
}

Harl& Harl::operator=(const Harl& rhs) {
	(void)rhs;
	return (*this);
}

Harl::~Harl(void) {}

void Harl::debug(void) {
	std::cout << COLOR_DEBUG << "[ DEBUG ]" << COLOR_RESET << std::endl;
	std::cout << MSG_DEBUG << std::endl;
}

void Harl::info(void) {
	std::cout << COLOR_INFO << "[ INFO ]" << COLOR_RESET << std::endl;
	std::cout << MSG_INFO << std::endl;
}

void Harl::warning(void) {
	std::cout << COLOR_WARNING << "[ WARNING ]" << COLOR_RESET << std::endl;
	std::cout << MSG_WARNING << std::endl;
}

void Harl::error(void) {
	std::cout << COLOR_ERROR << "[ ERROR ]" << COLOR_RESET << std::endl;
	std::cout << MSG_ERROR << std::endl;
}

void Harl::filter(std::string level) {
	int index = -1;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			index = i;
			break; ;
		}
	}

	switch (index)
	{
		case 0:
			debug();
			info();
			warning();
			error();
			break ;
		case 1:
			info();
			warning();
			error();
			break ;
		case 2:
			warning();
			error();
			break;
		case 3:
			error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}

}
