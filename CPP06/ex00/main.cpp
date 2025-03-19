/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:05:44 by floriano          #+#    #+#             */
/*   Updated: 2025/03/19 13:50:42 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ScalarConverter.class.hpp"

// int main(int ac, char **av){
//     if (ac != 2){
//         std::cout << "Please enter either a char / int / float / double " << std::endl;
//         return 0;
//     }
//     ScalarConverter::convert(av[1]);
//     return 0;
// }

#include <iostream>
#include "ScalarConverter.class.hpp"

void runTest(const std::string& input) {
    std::cout << "===== TEST: \"" << input << "\" =====" << std::endl;
    ScalarConverter::convert(input);
    std::cout << "======================================" << std::endl << std::endl;
}

int main() {
    // Using C-style array for compatibility with C++98
    const char* testCases[] = {
        "0", "42", "-42", "2147483647", "-2147483648", // Integer cases
        "42.0", "-42.0", "3.14", "-3.14", "0.0", "0.1", // Floating-point cases
        "42.0f", "-42.0f", "3.14f", "-3.14f", "0.0f", "0.1f", // Float with 'f'
        "a", "'b'", "'Z'", // Character cases

        // Edge cases
        "2147483648", "-2147483649",  // Beyond INT range
        "340282346638528859811704183484516925440.0f", // Beyond FLOAT range
        "-340282346638528859811704183484516925440.0f", // Beyond FLOAT range negative
        "1e309", "-1e309",  // Beyond DOUBLE range
        "3.4028235e+38f", "-3.4028235e+38f", // FLOAT edge case

        // Special cases
        "nan", "nanf", "+inf", "-inf", "+inff", "-inff",

        // Invalid cases
        "hello", "42abc", "12.3.4", "5.5f5", "'invalid'", ""
    };

    int numTests = sizeof(testCases) / sizeof(testCases[0]); // Compute array size

    for (int i = 0; i < numTests; i++) {
        runTest(testCases[i]);
    }

    return 0;
}
