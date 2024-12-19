#include "Brain.hpp"

Brain::Brain(){
    for (int i = 0; i < 100; i++){
        ideas[i] = "test";
    }
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &cp){
    for (int i = 0; i < 100; i++){
        ideas[i] = cp.ideas[i];
    }
}

Brain &Brain::operator=(Brain const &cpi){
    for (int i = 0; i < 100; i++){
        ideas[i] = cpi.ideas[i];
    }
    return *this;
}

void    Brain::putideas(std::string mmh, int i){
    ideas[i] = mmh;
}

std::string Brain::getidea(int i){
    return ideas[i];
}