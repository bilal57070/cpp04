#include "Cure.hpp"

cure::cure(){
    _type = "cure";
}

cure::~cure(){}

cure::cure(cure const &cp){
    *this = cp;
}

cure &cure::operator=(cure const &cp){
    _type = cp._type;
    return *this;
}

cure*   cure::clone() const{
    cure *a = new cure;
    return (a);
}

void    cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

std::string const &cure::getType() const{
    return (_type);
}