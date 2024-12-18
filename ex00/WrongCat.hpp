#ifndef WRONGWrongCat_HPP
#define WRONGWrongCat_HPP

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat const &cpi);
        WrongCat& operator=(WrongCat const &cp);
        void makeSound() const;
        std::string getType() const;
};


#endif