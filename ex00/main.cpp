#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* w = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << w->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    w->makeSound();
    return 0;
}