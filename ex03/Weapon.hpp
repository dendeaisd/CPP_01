/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 08:05:54 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/13 08:11:20 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEPON_HPP
# include <iostream>
# include <string>

class Weapon{
  std::string type;
  
  public:
    const std::string& getType();
    void setType(std::string type);
};

# endif
