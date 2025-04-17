/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:36:58 by falberti          #+#    #+#             */
/*   Updated: 2025/04/15 13:43:50 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "template.hpp"

// class Fixed {
//     private:
//         int value;
//     public:
//         Fixed(int v = 0) : value(v) {}
//         bool operator>=(const Fixed& other) const { return value >= other.value; }
//         bool operator==(const Fixed& other) const { return value == other.value; }
//         friend std::ostream& operator<<(std::ostream& os, const Fixed& f) {
//             os << f.value;
//             return os;
//         }
//     };

int main() {
    std::cout << "--- Test: int ---\n";
    int a = 10, b = 20;
    std::cout << "a = " << a << ", b = " << b << "\n";
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << "\n";
    std::cout << "min = " << min_t(a, b) << ", max = " << max_t(a, b) << "\n\n";

    std::cout << "--- Test: double ---\n";
    double x = 3.14, y = 2.71;
    std::cout << "x = " << x << ", y = " << y << "\n";
    swap(x, y);
    std::cout << "x = " << x << ", y = " << y << "\n";
    std::cout << "min = " << min_t(x, y) << ", max = " << max_t(x, y) << "\n\n";

    std::cout << "--- Test: char ---\n";
    char c1 = 'z', c2 = 'a';
    std::cout << "c1 = " << c1 << ", c2 = " << c2 << "\n";
    swap(c1, c2);
    std::cout << "c1 = " << c1 << ", c2 = " << c2 << "\n";
    std::cout << "min = " << min_t(c1, c2) << ", max = " << max_t(c1, c2) << "\n\n";

    std::cout << "--- Test: std::string ---\n";
    std::string s1 = "world", s2 = "hello";
    std::cout << "s1 = " << s1 << ", s2 = " << s2 << "\n";
    swap(s1, s2);
    std::cout << "s1 = " << s1 << ", s2 = " << s2 << "\n";
    std::cout << "min = " << min_t(s1, s2) << ", max = " << max_t(s1, s2) << "\n\n";

    // std::cout << "--- Test: Fixed class ---\n";
    // Fixed f1(5), f2(8);
    // std::cout << "f1 = " << f1 << ", f2 = " << f2 << "\n";
    // swap(f1, f2);
    // std::cout << "f1 = " << f1 << ", f2 = " << f2 << "\n";
    // std::cout << "min = " << min_t(f1, f2) << ", max = " << max_t(f1, f2) << "\n";

    return 0;
}

