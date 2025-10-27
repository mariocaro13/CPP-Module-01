/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:53:30 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/10/27 15:10:46 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed") {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::Zombie(const Zombie& other) : name(other.name) {}

Zombie& Zombie::operator=(const Zombie& rhs) {
	if (this != &rhs)
		name = rhs.name;
	return (*this);
}

Zombie::~Zombie(){
	std::cout << name << ": has been destroyed." << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ" << std::endl;
}
