#ifndef WRONGWrongAnimal_HPP
#define WRONGWrongAnimal_HPP

# include <string>
# include <iostream>

class WrongAnimal{
    protected:
        std::string type;

    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(WrongAnimal const &cpi);
        WrongAnimal& operator=(WrongAnimal const &cp);
        void makeSound() const;
        std::string getType() const;
};



#endif