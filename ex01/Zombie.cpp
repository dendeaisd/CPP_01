/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 04:21:25 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/14 02:14:04 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zName) : name(zName) {}

Zombie::Zombie() {
  name = "Olaf";
}

Zombie::~Zombie() {
  std::cout << name << " is destroyed." << std::endl;
}

void Zombie::setName(std::string newName) {
  name = newName;
}

void Zombie::announce(void) {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
