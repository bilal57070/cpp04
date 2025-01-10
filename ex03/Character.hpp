#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter{
    public:
        Character();
        ~Character();
        Character(std::string name);
        Character(Character const &cp);
        Character& operator=(Character const &cpi);
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

    private:
        std::string name;
        AMateria *mater[4];
};





#endif