#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &cpi) : WrongAnimal(cpi){
    std::cout << "copy contructor called" << std::endl;
    *this = cpi;
}

WrongCat &WrongCat::operator=(WrongCat const &cp){
    type = cp.type;
    std::cout << "overloaded copy operator called" << std::endl;
    return *this;
}

void    WrongCat::makeSound() const{
    std::cout << "MEOWWWWWWWWWWWW" << std::endl;
}

std::string WrongCat::getType() const{
    return type;
}