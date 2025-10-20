/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:41:34 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/10/20 17:11:55 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(void) : name("Unnamed") {}

Zombie::Zombie(const Zombie& other) : name(other.name) {}

Zombie& Zombie::operator=(const Zombie& rhs) {
	if (this != &rhs)
		name = rhs.name;
	return (*this);
}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
	std::cout << name << ": has been destroyed." << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
