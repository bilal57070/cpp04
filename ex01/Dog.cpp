#include "Dog.hpp"

Dog::Dog(){
    type = "dog";
    brain = new Brain;
    std::cout << "dog constructor called" << std::endl;
}

Dog::~Dog(){
    delete brain;
    std::cout << "dog destructor called" << std::endl;
}

Dog::Dog(Dog const &cpi) : Animal(cpi){
    std::cout << "copy contructor called" << std::endl;
    *this = cpi;
}

Dog &Dog::operator=(Dog const &cp){
    type = cp.type;
    std::cout << "overloaded copy operator called" << std::endl;
    return *this;
}

void    Dog::makeSound() const{
    std::cout << "WOUF WOUF" << std::endl;
}

std::string Dog::getType() const{
    return type;
}

void    Dog::setidea(std::string idea, int i){
    brain->putideas(idea, i);
}

void    Dog::widea(int i){
    std::cout << "l'idee n°" << i << " est " << brain->getidea(i) << std::endl;
}