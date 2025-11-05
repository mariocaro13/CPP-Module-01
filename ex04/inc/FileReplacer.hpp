/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:12:50 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/05 13:51:03 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

# include <string>
# include <fstream>
# include <iostream>

class FileReplacer
{
	private:
		std::string filename;
		std::string s1;
		std::string s2;

		bool openInput(std::ifstream& infile) const;
		bool openOutput(std::ofstream& outfile) const;

	public:
		FileReplacer(void);
		FileReplacer(std::string filename, std::string s1, std::string s2);
		FileReplacer(const FileReplacer& other);
		FileReplacer& operator=(const FileReplacer& rhs);
		~FileReplacer(void);

		bool process(void);
};

#endif
