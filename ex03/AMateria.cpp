#include "AMateria.hpp"

AMateria::AMateria(){
    _type = "default";
}

AMateria::~AMateria(){}

AMateria::AMateria(std::string const &type){
    _type = type;
}

std::string const &AMateria::getType() const {
    return (_type);
}

void    AMateria::use(ICharacter& target){
    std::cout << "mater used on " << target.getName() << std::endl;
}