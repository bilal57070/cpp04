#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *brain;

    public:
        Cat();
        ~Cat();
        Cat(Cat const &cpi);
        Cat& operator=(Cat const &cp);
        void makeSound() const;
        std::string getType() const;
        void    setidea(std::string idea, int i);
        void    widea(int i);
};

#endif