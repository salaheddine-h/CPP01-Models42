/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:55:21 by marvin            #+#    #+#             */
/*   Updated: 2026/01/10 15:55:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char **argv)
{
    // a.out && Namefile && s1 && s2 
    // argv[1] → filename
    // argv[2] → string to search (s1)
    // argv[3] → string to replace with (s2)

	if (argc != 4)
	{
		std::cerr << "Arguments number must be 3!!" << std::endl;
		return (1);
	}
	if ((std::string(argv[2])).empty() || (std::string(argv[3])).empty())
	{
		std::cerr << "Empty args are not exepted !" << std::endl;
		return (1);
	}
	std::ifstream inputFile(argv[1]);
	if (!inputFile)
	{
		std::cerr << "Failed to open the file : " << argv[1] << std::endl;
		return (1);
	}
	std::ofstream outputFile(((std::string)argv[1] + ".replace").c_str());
	if (!outputFile)
	{
		inputFile.close();
		std::cerr << "Failed to create the output file(.replace) !!" << std::endl;
		return (1);
	}
	std::string	line;
	while (std::getline(inputFile,line))
	{
		size_t	pos = 0;
		while ((pos = line.find(argv[2], pos)) != std::string::npos)
		{
			line.erase(pos, std::string(argv[2]).length());
			line.insert(pos, std::string(argv[3]));
			pos += ((std::string)argv[3]).length();
		}
		outputFile << line;
		if (!inputFile.eof())
			outputFile << std::endl;
	}
	inputFile.close();
	outputFile.close();
	return (0);
}
