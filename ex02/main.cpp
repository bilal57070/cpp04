#include "Cat.hpp"
#include "Dog.hpp"

int main(){
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;
    const Animal *tab[10];
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }

    for (int i = 0; i <= 10; i++) {
        delete tab[i];
    }

    Cat cat;
    cat.getType();
    cat.makeSound();
    cat.setidea("jvai n3ess sah", 0);
    cat.widea(0);
    return 0;
}