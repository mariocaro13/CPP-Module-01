/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:24:11 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/05 12:37:11 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(void) : name("Unnamed"), weapon(nullptr) {}

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(&weapon) {}

HumanA::HumanA(const HumanA& other) : name(other.name), weapon(other.weapon) {}

HumanA& HumanA::operator=(const HumanA& rhs) {
	if (this != &rhs) {
		name = rhs.name;
		weapon = rhs.weapon;
	}
	return (*this);
}

HumanA::~HumanA() {}

void HumanA::attack() const {
	if (weapon)
		std::cout << name << ": attacks with their " << weapon->getType() << std::endl;
}
