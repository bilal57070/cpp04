#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <string>
# include <iostream>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(Brain const &cp);
        Brain& operator=(Brain const &cpi);
        void putideas(std::string mmh, int i);
        std::string getidea(int i);
};

#endif