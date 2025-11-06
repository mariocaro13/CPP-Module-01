/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:04:03 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/06 20:43:36 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "HarlMessages.hpp"

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

void Harl::complain(std::string level) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*actions[])(void) =  {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*actions[i])();
			return ;
		}
	}

	std::cout << "[ Probably complaining about insignificant problems like : <" << COLOR_ERROR <<  level << COLOR_RESET << "> is not a valid level ]" << std::endl;
}
