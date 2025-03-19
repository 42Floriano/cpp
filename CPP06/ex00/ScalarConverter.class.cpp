/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:28:11 by falberti          #+#    #+#             */
/*   Updated: 2025/03/19 11:26:11 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.class.hpp"

ScalarConverter::ScalarConverter(void){}
ScalarConverter::ScalarConverter(ScalarConverter const &src){
  *this = src;
}
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs){
  (void)rhs;
  return *this;
}
ScalarConverter::~ScalarConverter(void){}

void ScalarConverter::convert(const std::string& str){
  size_t len = str.length();
  e_type type = whichType(str, len);
  switch(type){
    case INVALID:
      std::cout << "invalid input" << std::endl;
      break;
    case SPECIAL:
      printSpecial(str);
      break;
    case CHAR:
      convertChar(str, len);
      break;
    case INT:
      convertInt(str);
      break;
    case FLOAT:
      convertFloat(str);
      break;
    case DOUBLE:
      convertDouble(str);
      break;
  }
}