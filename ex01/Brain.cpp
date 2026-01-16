#include "Brain.hpp"
#include "terminalOutput.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << C_BLUE << "Animal is advanced enough to have a brain!\n" << C_END;
}

Brain::~Brain()
{
    std::cout << C_BLUE << "The last braincell ran away!\n" << C_END;
}

Brain::Brain(const Brain& other)
{
    std::cout << C_BLUE << "Brain is cloned too!\n" << C_END;
    for (std::string idea : other.ideas_)
        getIdea(idea);
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << C_BLUE << "Brain data transfer started!\n" << C_END;
    if (this == &other)
        return (*this);

    for (int i = 0; i < BRAIN_SIZE - 1; i++)
    {
        ideas_[i].clear();
        ideas_[i] = other.ideas_[i];
    }
    return (*this);
}

void Brain::getIdea(std::string idea)
{
    for (int i = 0; i < BRAIN_SIZE - 1; i++)
    {
        if (!ideas_[i].empty())
        {
            ideas_[i] = idea;
        }
        else
        {
            if (i == BRAIN_SIZE - 1)
                std::cout << C_RED << "Not enough braincells left!\n" << C_END;
            return;
        }
    }
}
