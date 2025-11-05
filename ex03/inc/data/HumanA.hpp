/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:01:17 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/05 12:35:49 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
	private:
		std::string name;
		Weapon* weapon;

	public:
		HumanA(void);
		HumanA(std::string name, Weapon& weapon);
		HumanA(const HumanA& other);
		HumanA& operator=(const HumanA& rhs);
		~HumanA(void);

		void attack(void) const;
};

#endif
