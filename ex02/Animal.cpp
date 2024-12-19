#include "Animal.hpp"

Animal::Animal(){
    type = "animal";
    std::cout << "animal constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const &cpi){
    std::cout << "copy contructor called" << std::endl;
    *this = cpi;
}

Animal &Animal::operator=(Animal const &cp){
    type = cp.type;
    std::cout << "overloaded copy operator called" << std::endl;
    return *this;
}

/*void    Animal::makeSound() const{
    std::cout << "Animal noise" << std::endl;
}*/

std::string Animal::getType() const{
    return type;
}