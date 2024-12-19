#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain *brain;

    public:
        Dog();
        ~Dog();
        Dog(Dog const &cpi);
        Dog& operator=(Dog const &cp);
        void makeSound() const;
        std::string getType() const;
        void    setidea(std::string idea, int i);
        void    widea(int i);
};

#endif