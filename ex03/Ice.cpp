#include "Ice.hpp"

ice::ice(){
    _type = "ice";
}

ice::~ice(){}

ice::ice(ice const &cp){
    *this = cp;
}

ice&    ice::operator=(ice const &cpi){
    _type = cpi._type;;
    return *this;
}

ice*    ice::clone() const{
    ice* b = new ice;
    return b;
}