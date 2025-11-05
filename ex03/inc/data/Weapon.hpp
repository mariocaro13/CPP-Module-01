/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:50:52 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/05 12:05:14 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(void);
		Weapon(std::string type);
		Weapon(const Weapon& other);
		Weapon& operator=(const Weapon& rhs);
		~Weapon(void);

		const std::string& getType() const;
		void setType(std::string newType);
};

#endif
