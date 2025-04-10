/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:44:25 by falberti          #+#    #+#             */
/*   Updated: 2025/04/10 13:47:19 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_CLASS_HPP
# define SERIALIZER_CLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <stdint.h>
# include "Data.hpp"

class Serializer {
private:
	// Serializer();
	// Serializer();
	// Serializer(const Serializer &other);
	// ~Serializer();

	// Serializer &operator=(const Serializer &rhs);

public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};


#endif