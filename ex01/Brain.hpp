#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

#define BRAIN_SIZE 100

class Brain
{
    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();

        void getIdea(std::string idea);

    private:
        std::string ideas_[BRAIN_SIZE];
};

#endif // BRAIN_HPP
