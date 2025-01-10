#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"

class ice : public AMateria {
    public:
        ice();
        ~ice();
        ice (ice const &cp);
        ice& operator=(ice const &cp);
        ice* clone() const;
        void use(ICharacter &target);

    private:
        std::string _type;
};





#endif