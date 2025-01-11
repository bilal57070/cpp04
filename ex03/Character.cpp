#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(){
    name = "default";
    for (int i = 0; i < 4; i++)
        mater[i] = NULL;
}

Character::~Character(){
    for (int i = 0; i < 4; i++){
        if (mater[i])
            delete mater[i];
    }
}

Character::Character(std::string name){
    this->name = name;
    for (int i = 0; i < 4; i++){
        mater[i] = NULL;
    }
}

Character::Character(Character const &cp){
    *this = cp;
}

Character&  Character::operator=(Character const &cp){
    name = cp.name;
    for (int i = 0; i < 4; i++){
        mater[i] = cp.mater[i];
    }
    return (*this);
}

std::string  const &Character::getName() const{
    return (name);
}

void Character::equip(AMateria *m){
    for (int i = 0; i < 4; i++){
        if (mater[i] == NULL){
            mater[i] = m;
            std::cout << getName() << " has equiped materia at place" << i << std::endl;
            return;
        }
    }
    std::cout << "no place for that materia" << std::endl;
}

void    Character::unequip(int idx){
    if (mater[idx] != NULL){
        mater[idx] = NULL;
        std::cout << getName() << " has unequiped materia at place " << idx << std::endl;
    }
    std::cout << "place already empty" << std::endl;
}

void    Character::use(int idx, ICharacter& target){
    if (!mater[idx]){
        std::cout << "nothing equiped here" << std::endl;
        return;
    }
    mater[idx]->use(target);
}