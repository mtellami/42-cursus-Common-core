/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:52:00 by mtellami          #+#    #+#             */
/*   Updated: 2023/04/02 10:01:06 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed ( std::string infile ) {
	this->Infile = infile;
	this->Outfile = infile + ".replace";
}

Sed::~Sed ( void ) {
}

void Sed::replace ( std::string s1, std::string s2) {

	std::ifstream ins(this->Infile);
	if  (!ins.is_open()) {
		std::cerr << "Error opening the input file" << std::endl; 
		return ;
	}

	if (s1.empty()) {
		std::cerr << "Error: fo_find is empty" << std::endl;
		return ;
	}

	std::string buffer;

	std::getline(ins, buffer, '\0');
	if (buffer.empty()) {
		std::cerr << "Error: Empty input file" << std::endl;
		return ;
	}

	size_t pos = 0;
	while ( true ) {
		pos = buffer.find(s1, pos);
		if (pos == std::string::npos)
			break ;
		buffer.erase(pos, s1.length());
		buffer.insert(pos, s2);
		pos += s2.length();
	}

	std::ofstream ofs(this->Outfile);
	ofs << buffer;

	ins.close();
	ofs.close();
}
