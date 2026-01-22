#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include "AMateria.hpp"

class Fireball : public AMateria
{
    public:
        Fireball();
        Fireball(const Fireball& other);
        Fireball& operator=(const Fireball& other);
        ~Fireball();

        AMateria* clone() const override;
        void      use(ICharacter& target) override;

    private:
};

#endif // FIREBALL_HPP