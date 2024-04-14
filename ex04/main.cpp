/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 06:14:18 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/14 10:47:16 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replaceString(std::string& source, \
      const std::string& from, const std::string& to) {
  std::string result;
  std::size_t startPos = 0;
  std::size_t findPos;

  if (from.empty()) return;
  result.reserve(source.length()); //performance, idk if its worth it here 
  while((findPos = source.find(from, startPos)) != std::string::npos)
  {
    result.append(source, startPos, findPos - startPos); //append part before from
    result.append(to);// append 'to'
    startPos = findPos + from.length();// move past initial 'from' part
  }
  result.append(source, startPos, std::string::npos); //apend rest of the string
  source.swap(result); //replace the contents of source
}

int main(int ac, char **av) {
  if (ac != 4)
    return (std::cerr << "Usage: " << av[0] << \
    " <filename> <s1> <s2>" << std::endl, 1);

  std::string filename(av[1]);
  std::string s1(av[2]);
  std::string s2(av[3]);    
  
  std::ifstream inFile(filename);
  if (!inFile)
    return (std::cerr << "Failed to open  the file: " << \
              filename << std::endl, 1);
              
  std::string newFilename = filename + ".replace";
  std::ofstream outFile(newFilename);
  if (!outFile)
    return (std::cerr << "Failed to create the file: " << \
              filename << std::endl, 1); 
  
  std::string line;
  while (getline(inFile, line)) {
    replaceString(line, s1, s2);
    outFile << line << "\n";
  }

  inFile.close();
  outFile.close();
  std::cout << "File processing complete. Output file: " << \
              newFilename << std::endl;
}
