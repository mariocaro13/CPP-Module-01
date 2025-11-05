/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:56:42 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/05 12:01:03 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : type("undeined") {}

Weapon::Weapon(std::string type) : type(type) {}

Weapon::Weapon(const Weapon& other) : type(other.type) {}

Weapon& Weapon::operator=(const Weapon& rhs) {
	if (this != &rhs)
		type = rhs.type;
	return (*this);
}

Weapon::~Weapon(void) {}

const std::string& Weapon::getType() const {
	return (type);
}

void Weapon::setType(std::string newType) {
	type = newType;
}
