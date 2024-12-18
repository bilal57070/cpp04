#include "Cat.hpp"

Cat::Cat(){
    type = "cat";
    std::cout << "cat constructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << "cat destructor called" << std::endl;
}

Cat::Cat(Cat const &cpi) : Animal(cpi){
    std::cout << "copy contructor called" << std::endl;
    *this = cpi;
}

Cat &Cat::operator=(Cat const &cp){
    type = cp.type;
    std::cout << "overloaded copy operator called" << std::endl;
    return *this;
}

void    Cat::makeSound() const{
    std::cout << "MEOWWWWWWWWWWWW" << std::endl;
}

std::string Cat::getType() const{
    return type;
}