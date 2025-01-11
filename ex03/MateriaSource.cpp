#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
        mater[i] = NULL;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++){
        if (mater[i])
            delete (mater[i]);
    }
}

MateriaSource::MateriaSource(MateriaSource const &cp){
    *this = cp;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &cpi){
    for (int i = 0; i < 4; i++){
        mater[i] = cpi.mater[i];
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria* m){
    for (int i = 0; i < 4; i++){
        if (mater[i] == NULL){
            mater[i] = m;
            std::cout << "learned " << mater[i]->getType() << std::endl;
            return;
        }
    }
    std::cout << "cant learn mater" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type){
    for (int i = 0; i < 4; i++){
        if (mater[i]->getType() == type)
            return (mater[i]->clone());
    }
    std::cout << "cant create that materia" << std::endl;
    return NULL;
}