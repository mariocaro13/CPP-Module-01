/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:24:11 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/06 21:04:44 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
#include <cstddef>

HumanA::HumanA(void) : name("Unnamed"), weapon(NULL) {}

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
