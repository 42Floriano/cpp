/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.class.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floriano <floriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:08:36 by floriano          #+#    #+#             */
/*   Updated: 2025/03/07 12:16:31 by floriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_CLASS_HPP
#define SCALARCONVERTER_CLASS_HPP

# include <iostream>
# include <string>

enum e_type {
	SPECIAL = 0,
	CHAR = 1,
	INT = 2,
	FLOAT = 3,
	DOUBLE = 4,
	INVALID = -1
};

class ScalarConverter{
  private:

  public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &value);
	ScalarConverter operator=(const ScalarConverter& rhs);
	~ScalarConverter();
	e_type converters(std::string value);
};

#endif