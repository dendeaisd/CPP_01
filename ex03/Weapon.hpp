/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 08:05:54 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/14 05:59:19 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <string>

class Weapon {
  std::string type;

 public:
  Weapon(const std::string& type);
  const std::string& getType() const;
  void setType(const std::string& type);
  ~Weapon();
};

# endif
