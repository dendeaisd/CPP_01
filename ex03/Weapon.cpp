/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 04:06:27 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/14 05:51:02 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type){}

Weapon::~Weapon(){}

const std::string& Weapon::getType() const{
  return type;
}

void Weapon::setType(const std::string& type) {
  this->type = type;
}
