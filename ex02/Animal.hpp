#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal{
    protected:
        std::string type;

    public:
        Animal();
        virtual ~Animal();
        Animal(Animal const &cpi);
        Animal& operator=(Animal const &cp);
        virtual void makeSound() const = 0;
        std::string getType() const;
};




#endif