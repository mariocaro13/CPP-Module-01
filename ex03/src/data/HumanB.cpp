/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:36:49 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/05 12:44:08 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(void) : name("Unnamed"), weapon(nullptr) {}

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

HumanB::HumanB(const HumanB& other) : name(other.name), weapon(other.weapon) {}

HumanB& HumanB::operator=(const HumanB& rhs) {
	if (this != &rhs) {
		name = rhs.name;
		weapon = rhs.weapon;
	}
	return (*this);
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() const {
	if (weapon)
		std::cout << name << ": attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << ": has no weapon to attack with." << std::endl;
}
