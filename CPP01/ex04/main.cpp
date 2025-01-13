/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:32:09 by albertini         #+#    #+#             */
/*   Updated: 2024/11/18 12:08:28 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

static void    print_err(int err)
{
    if (err == ARGS)
        std::cerr << "Error: 3 args needed\n" <<
            "./replace <filename> <s1> <s2>" << std::endl;
    if (err == EMPTY)
        std::cerr << "Error: str cannot be empty\n" << std::endl;
    if (err == INPUT)
        std::cerr << "Error: input file" << std::endl;
    if (err == OUTPUT)
        std::cerr << "Error: output file" << std::endl;
}

static void readAndReplace(const std::string &filename, 
std::string &outputFile, const std::string &s1, const std::string &s2)
{
    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open())
    {
        print_err(INPUT);
        return ;
    }
    std::ofstream outFile(outputFile.c_str());
    if (!outFile.is_open())
    {
        print_err(OUTPUT);
        return ;
    }
    std::string line;
    while (std::getline(inFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos =+ s2.length();
        }
        outFile << line << '\n';
    }
    inFile.close();
    outFile.close();
    return ;
}

int	main (int ac, char **ag)
{
    if (ac != 4)
    {
        print_err(ARGS);
        return (1);
    }
    const std::string filename = ag[1];
    const std::string s1 = ag[2];
    const std::string s2 = ag[3];
    if (s1.empty() || s2.empty())
    {
        print_err(EMPTY);
        return (1);
    }
    std::string outputFile = filename + ".replace";
    readAndReplace(filename, outputFile, s1, s2);
	return (0);
}
