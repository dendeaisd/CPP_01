/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 06:14:18 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/14 08:42:42 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replaceString(std::string& source, \
      const std::string& from, const std::string& to) {
  
}

int main(int ac, char **av) {
  if (ac == 3) {
    std::ifstream inFile(av[0]);
    if (!inFile)
      return (std::cerr << "Failed to open file." << std::endl, 1);
    
    
    inFile.close();
  }
}