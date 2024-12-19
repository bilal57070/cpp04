#include "Cat.hpp"

Cat::Cat(){
    type = "cat";
    brain = new Brain;
    std::cout << "cat constructor called" << std::endl;
}

Cat::~Cat(){
    delete brain;
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

void    Cat::setidea(std::string idea, int i){
    brain->putideas(idea, i);
}

void    Cat::widea(int i){
    std::cout << "l'idee n°" << i << " est " << brain->getidea(i) << std::endl;
}