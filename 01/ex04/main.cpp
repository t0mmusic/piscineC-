/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:12:47 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 11:21:20 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Expected: ./sed <input file name> <text1> <text2>" << std::endl;
		return (1);
	}
	std::string	file_name = av[1];

	std::ifstream	infile(av[1]);
	if (!infile.is_open())
	{
		std::cout << "No " << file_name << " file exists!" << std::endl;
		return (1);
	}
	file_name.append(".replace");
	std::ofstream	outfile(file_name, std::ios::out);

	std::string	text_one = av[2];
	std::string	text_two = av[3];
	std::string	line;
	
	size_t	match;
	while (std::getline(infile, line))
	{
		match = line.find(text_one);
		while (match != std::string::npos)
		{
			line.erase(match, text_one.length());
			line.insert(match, text_two);
			match = line.find(text_one);
		}
		outfile << line << std::endl;
	}

	infile.close();
	outfile.close();
}