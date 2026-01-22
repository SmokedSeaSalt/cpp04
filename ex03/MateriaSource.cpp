#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < KNOWN_MATERIA; i++)
    {
        delete materia_[i];
        materia_[i] = nullptr;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < KNOWN_MATERIA; i++)
    {
        delete materia_[i];
        if (other.materia_[i] == nullptr)
            materia_[i] = nullptr;
        else
            materia_[i] = other.materia_[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this == &other)
        return (*this);
    for (int i = 0; i < KNOWN_MATERIA; i++)
    {
        delete materia_[i];
        if (other.materia_[i] == nullptr)
            materia_[i] = nullptr;
        else
            materia_[i] = other.materia_[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < KNOWN_MATERIA; i++)
    {
        if (materia_[i] == nullptr)
        {
            materia_[i] = m;
            return;
        }
    }
    return;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < KNOWN_MATERIA; i++)
    {
        if (materia_[i] != nullptr)
        {
            if (materia_[i]->getType() == type)
                return materia_[i]->clone();
        }
    }
    return nullptr;
}