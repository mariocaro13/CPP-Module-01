
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:21:15 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/11/05 13:23:01 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

FileReplacer::FileReplacer(void) {}

FileReplacer::FileReplacer(std::string filename, std::string s1, std::string s2) : filename(filename), s1(s1), s2(s2) {}

FileReplacer::FileReplacer(const FileReplacer& other) : filename(other.filename), s1(other.s1), s2(other.s2) {}

FileReplacer& FileReplacer::operator=(const FileReplacer& rhs) {
	if (this != &rhs) {
		filename = rhs.filename;
		s1 = rhs.s1;
		s2 = rhs.s2;
	}
	return (*this);
}

FileReplacer::~FileReplacer() {}

bool FileReplacer::openInput(std::ifstream& infile) const {
	infile.open(filename.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error: cannot open input file." << std::endl;
		return (false);
	}
	return (true);
}

bool FileReplacer::openOutput(std::ofstream& outfile) const {
	outfile.open((filename + ".replace").c_str());
	if (!outfile.is_open()) {
		std::cerr << "Error: cannot create output file." << std::endl;
		return (false);
	}
	return (true);
}

bool FileReplacer::process(void) {
	
	std::ifstream infile;
	std::ofstream outfile;
	
	if (!openInput(infile) || !openOutput(outfile))
		return (false);

	std::string line;
	while (std::getline(infile, line))
	{
		std::string result;
		size_t pos = 0;
		size_t found = line.find(s1, pos);
		
		while (found != std::string::npos) {
			result += line.substr(pos, found - pos);
			result += s2;
			pos = found + s1.length();
			found = line.find(s1, pos);
		}
		result += line.substr(pos);
		outfile << result << std::endl;
	}
	infile.close();
	outfile.close();
	return (true);
}
