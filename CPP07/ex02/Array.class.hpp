/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:00:22 by falberti          #+#    #+#             */
/*   Updated: 2025/04/15 14:38:23 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_TPP
#define ARRAY_CLASS_TPP

# include <iostream>
# include <stdexcept>

template <typename T>
class Array {
private:
    T* data;
    unsigned int length;

public:
    Array() : data(NULL), length(0) {}

    Array(unsigned int n) : data(new T[n]()), length(n) {}

    Array(const Array& other) : data(new T[other.length]), length(other.length) {
        for (unsigned int i = 0; i < length; ++i) {
            data[i] = other.data[i];
        }
    }

    Array& operator=(const Array& rhs) {
        if (this != &rhs) {
            delete[] data;
            length = rhs.length;
            data = new T[length];
            for (unsigned int i = 0; i < length; ++i) {
                data[i] = rhs.data[i];
            }
        }
        return *this;
    }

    ~Array() {
        delete[] data;
    }

    T& operator[](unsigned int i) {
        if (i >= length) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[i];
    }

    const T& operator[](unsigned int i) const {
        if (i >= length) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[i];
    }

    unsigned int size() const {
        return length;
    }
};

#endif
