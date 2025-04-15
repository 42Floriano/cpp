/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:55:11 by falberti          #+#    #+#             */
/*   Updated: 2025/04/15 13:57:17 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template_class.hpp"
#include <string>

// Function to apply on each element
void increment(int& x) {
    x++;
}

void to_upper(char& c) {
    if (c >= 'a' && c <= 'z')
        c -= 32;
}

void append_exclaim(std::string& s) {
    s += "!";
}

int main() {
    std::cout << "--- Test: int array ---\n";
    int nums[] = {1, 2, 3, 4};
    iter(nums, 4, increment);
    for (int i = 0; i < 4; ++i)
        std::cout << nums[i] << " ";
    std::cout << "\n\n";

    std::cout << "--- Test: char array ---\n";
    char chars[] = {'h', 'e', 'l', 'l', 'o'};
    iter(chars, 5, to_upper);
    for (int i = 0; i < 5; ++i)
        std::cout << chars[i];
    std::cout << "\n\n";

    std::cout << "--- Test: std::string array ---\n";
    std::string words[] = {"hello", "world"};
    iter(words, 2, append_exclaim);
    for (int i = 0; i < 2; ++i)
        std::cout << words[i] << " ";
    std::cout << "\n";

    return 0;
}