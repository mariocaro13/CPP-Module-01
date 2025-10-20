/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:36:27 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/10/20 17:08:51 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string	name;
	
public:
	Zombie(void);
	Zombie(const Zombie& other);
	Zombie& operator=(const Zombie& rhs);
	~Zombie(void);

	Zombie(std::string name);
	void	announce(void);
};

#endif
