/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 04:21:50 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/14 06:01:58 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name(name), weapon(nullptr) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) {
  this->weapon = &weapon;
}

void HumanB::attack() const {
  if (!weapon)
    std::cout << name << " has no weapon" << std::endl;
  std::cout << name << " attacks with their " << \
            weapon->getType() << std::endl;
}
