#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP


# include "IMateriaSource.hpp"



class MateriaSource : public IMateriaSource {
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const &cp);
        MateriaSource& operator=(MateriaSource const &cpi);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const &type);
    
    private:
        AMateria *mater[4];
};







#endif