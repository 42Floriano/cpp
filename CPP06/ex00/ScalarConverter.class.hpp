/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.class.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:08:36 by floriano          #+#    #+#             */
/*   Updated: 2025/03/12 13:31:24 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_CLASS_HPP
#define SCALARCONVERTER_CLASS_HPP

# include <iostream>
# include <string>
# include "whichType.cpp"

# define MIN_INT std::numeric_limits<int>::min()
# define MAX_INT std::numeric_limits<int>::max()
# define MIN_FLOAT std::numeric_limits<float>::min()
# define MAX_FLOAT std::numeric_limits<float>::max()
# define MIN_DOUBLE std::numeric_limits<double>::min()
# define MAX_DOUBLE std::numeric_limits<double>::max()

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
	ScalarConverter();
	ScalarConverter(const ScalarConverter &value);
  public:
	ScalarConverter &operator=(const ScalarConverter& rhs);
	~ScalarConverter();
	static void convert(const std::string& str);
};

	e_type converters(std::string value);
	void printSpecial(const std::string& str);
	void convertChar(const std::string& str, size_t& len);
	void convertInt(const std::string& str);
	void convertFloat(const std::string& str);
	void convertDouble(const std::string& str);


#endif