#include "Brain.class.hpp"

Brain::Brain() {
    std::cout << "Brain Default Constructor called" << std::endl;
    // Initialize the first three ideas
    _ideas[0] = "Manger!";
    _ideas[1] = "Jouer!";
    _ideas[2] = "Sortir!";
    // Fill remaining slots with empty strings
    for (int i = 3; i < 100; i++) {
        _ideas[i] = "";
    }
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain Copy Constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = other._ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain Assignment Operator called" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            this->_ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain Destructor called" << std::endl;
}

void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100) {
        _ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return _ideas[index];
    }
    return "";
}
