/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:08:50 by falberti          #+#    #+#             */
/*   Updated: 2025/07/01 16:05:24 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


rpn::rpn(){}
rpn::rpn(const rpn& other){
    (void) other;
}
rpn& rpn::operator=(const rpn& rhs){
    if (this != &rhs){
        
    }
    return *this;
}
rpn::~rpn(){}

bool rpn::isNum(const std::string& s){
    return s.length() == 1 && std::isdigit(s[0]);
}

bool rpn::isOpe(const std::string& s){
    return s.length() == 1 && (s[0] == '-' || s[0] == '*' || s[0] == '/' || s[0] == '+');
}

int rpn::applyOpe(int a, int b, char op) {
    switch (op) {
        case '+' : return a + b;
        case '-' : return a - b;
        case '*' : return a * b;
        case '/' :
            if (b == 0)
                throw std::runtime_error("Error: Division by 0 ");
            return a / b;
        default:
            throw std::runtime_error("Error: Unknown operator");
    }
}

int rpn::evaluate(const std::string& s){
    std::istringstream iss(s);
    std::stack<int> stack;
    std::string tok;

    while (iss >> tok){
        if(this->isNum(tok)){
            stack.push(std::atoi(tok.c_str()));
        } else if (this->isOpe(tok)){
            if (stack.size() < 2)
                throw std::runtime_error("Error: not enough operand");

            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();
            stack.push(this->applyOpe(a, b, tok[0]));
        } else {
            throw std::runtime_error("Error: invalid token: " + tok);
        }
    }
    if (stack.size() != 1)
        throw std::runtime_error("Error: invalid expression");
    return stack.top();
}
