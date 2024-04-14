/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 02:18:13 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/14 05:55:28 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) \
      : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
  std::cout << name << " attacks with their " << \
            weapon.getType() << std::endl;
}
