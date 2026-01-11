/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <szaoual@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 10:09:20 by szaoual           #+#    #+#             */
/*   Updated: 2026/01/11 10:18:12 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(std::string content, const std::string &s1, const std::string &s2) {
    if (s1.empty())
        return content;
    
    std::string result;
    size_t pos = 0;
    size_t found;
    
    while ((found = content.find(s1, pos)) != std::string::npos) {
        result.append(content, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(content, pos, content.length() - pos);
    
    return result;
}

int main(int ac, char **av)
{
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    
    std::ifstream infile(filename.c_str());
    if (!infile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }
    
    std::string content;
    std::string line;
    while (std::getline(infile, line)) {
        content += line;
        if (!infile.eof())
            content += "\n";
    }
    infile.close();
    
    std::string replaced = replaceAll(content, s1, s2);
    
    std::string outfilename = filename + ".replace";
    std::ofstream outfile(outfilename.c_str());
    if (!outfile.is_open()) {
        std::cerr << "Error: Could not create file " << outfilename << std::endl;
        return 1;
    }
    
    outfile << replaced;
    outfile.close();
    
    return 0;
}
