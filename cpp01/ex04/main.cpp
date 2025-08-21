/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwassim <rwassim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:26:05 by rwassim           #+#    #+#             */
/*   Updated: 2025/08/21 15:53:50 by rwassim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void replaceAll(std::string& content, const std::string& s1, const std::string& s2) {
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }
}

int main(int ac, char **av)
{
    if (ac != 4) {
        std::cerr << "Usage error" << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty()){
        std::cerr << "string cant be empty" << std::endl;
        return 1;
    }
    
    std::ifstream infile(filename.c_str());
    if (!infile.is_open()){
        std::cerr << "cant open the file" << std::endl;
        return 1;
    }

    std::ostringstream buffer;
    buffer << infile.rdbuf();
    std::string content = buffer.str();
    infile.close();

    replaceAll(content, s1, s2);

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open()) {
        std::cerr << "Error: cannot create output file." << std::endl;
        return 1;
    }
    
    outfile << content;
    outfile.close();

    return 0;
}