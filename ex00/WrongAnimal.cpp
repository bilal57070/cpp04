#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpi){
    std::cout << "copy contructor called" << std::endl;
    *this = cpi;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &cp){
    type = cp.type;
    std::cout << "overloaded copy operator called" << std::endl;
    return *this;
}

void    WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal noise" << std::endl;
}

std::string WrongAnimal::getType() const{
    return type;
}