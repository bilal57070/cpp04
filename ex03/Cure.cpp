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