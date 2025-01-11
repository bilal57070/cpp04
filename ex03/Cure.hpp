#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"


class cure : public AMateria {
    public:
        cure();
        ~cure();
        cure(cure const &cp);
        cure& operator=(cure const &cpi);
        cure* clone() const;
        void use(ICharacter& target);
        std::string const &getType() const;

    private:
        std::string _type;
};










#endif