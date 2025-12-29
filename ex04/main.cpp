/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:36:01 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/29 17:36:02 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool    readFile(const std::string& filename,  std::string& content)
{
    std::ifstream inFile(filename.c_str());
    if (!inFile)
    {
        std::cerr << "Error: open a file" << std::endl;
        return false;
    }
    std::string line;

    while(std::getline(inFile ,line))
    {
        content += line;
        if (!inFile.eof())
            content += "\n";
    } 
    inFile.close();
    return (true);
}

std::string replace(const std::string& content, const std::string& s1, const std::string& s2)
{
    size_t pos = 0;
    size_t found;
    std::string result = "";
    while(1)
    {
        found = content.find(s1, pos);
        if (found == std::string::npos)
        {
            result += content.substr(pos);
            break;
        }
        result += content.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length(); 
    }
    return (result);
}

bool writeFile(const std::string& filename, const std::string& content)
{
    std::string outfilename = filename + ".replace";
    std::ofstream outFile(outfilename.c_str());
    if (!outFile)
    {
        std::cerr << "Error: create file" << std::endl;
        return (false);
    }
    outFile << content;
    outFile.close();
    return (true);
}


int main (int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "./replace <file name> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return (1);
    }

    std::string content = "";
    if (!readFile(filename, content))
        return (1);

    std::string result = replace(content, s1, s2);

    if(!writeFile(filename, result))
        return (1);
    return (0);
}