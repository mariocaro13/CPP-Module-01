/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:59:48 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/06 20:02:45 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{
	private:
		void debug(void);
		void info (void);
		void warning(void);
		void error(void);
		
	public:
		Harl(void);
		Harl(const Harl& other);
		Harl& operator=(const Harl& rhs);
		~Harl(void);

		void complain(std::string level);
};

#endif
