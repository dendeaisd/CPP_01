/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 02:05:17 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/13 02:46:25 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie(std::string zName) : name(zName){}

void Zombie::announce(void) {
  std::cout << name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}

int main() {
  Zombie Test("Grig");
  
  Test.announce();
}