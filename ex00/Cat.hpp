#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        ~Cat();
        Cat(Cat const &cpi);
        Cat& operator=(Cat const &cp);
        void makeSound() const;
        std::string getType() const;
};

#endif