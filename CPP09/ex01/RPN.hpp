/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:09:28 by falberti          #+#    #+#             */
/*   Updated: 2025/07/01 15:31:39 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <sstream>
#include <cstdlib>
#include <string>

class rpn {
    public:
        rpn();
        rpn(const rpn& other);
        rpn& operator=(const rpn& rhs);
        ~rpn();
        int evaluate(const std::string& expre);
    private:
        bool isNum(const std::string& s);
        bool isOpe(const std::string& s);
        int applyOpe(int a, int b, char op);
        std::string removeSpaces(const std::string& input);
};

#endif