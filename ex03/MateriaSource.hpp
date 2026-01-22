#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define KNOWN_MATERIA 4

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);
        ~MateriaSource();

        void      learnMateria(AMateria* m);
        AMateria* createMateria(std::string const& type);

    private:
        AMateria* materia_[KNOWN_MATERIA];
};

#endif // MATERIASOURCE_HPP