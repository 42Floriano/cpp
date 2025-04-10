/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:45:05 by falberti          #+#    #+#             */
/*   Updated: 2025/04/10 14:02:50 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.class.hpp"
#include "Data.hpp"

uintptr_t Serializer::serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}