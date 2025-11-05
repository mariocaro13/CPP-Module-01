/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:50:10 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/05 12:36:43 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;

	public:
		HumanB(void);
		HumanB(std::string name);
		HumanB(const HumanB& other);
		HumanB& operator=(const HumanB& rhs);
		~HumanB(void);

		void setWeapon(Weapon& weapon);
		void attack(void) const;
};

#endif
