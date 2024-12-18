#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        ~Dog();
        Dog(Dog const &cpi);
        Dog& operator=(Dog const &cp);
        void makeSound() const;
        std::string getType() const;
};

#endif