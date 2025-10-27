/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:46:47 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/10/27 14:49:36 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	private:
		std::string name;

	public:
		Zombie(void);
		Zombie(std::string name);
		Zombie(const Zombie& other);
		Zombie& operator=(const Zombie& rhs);
		~Zombie(void);

		void	setName(std::string name);
		void	announce(void);
};

#endif
