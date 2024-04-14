/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:58:54 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/14 11:51:49 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H
# include <iostream>
#include <string> 

class Harl {
 void debug(void);
 void info(void);
 void warning(void);
 void error(void);
 
 public:
  Harl();
  void complain(std::string level);
  ~Harl();
};

#endif
