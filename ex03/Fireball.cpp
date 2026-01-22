#include "Fireball.hpp"
#include "ICharacter.hpp"
#include "terminalOutput.hpp"
#include <iostream>

Fireball::Fireball() : AMateria("fireball") {}


Fireball::~Fireball()
{

}

Fireball::Fireball(const Fireball& other) : AMateria(other.type_)
{

}

Fireball& Fireball::operator=(const Fireball& other)
{
    if (this == &other)
        return (*this);
    this->type_ = other.type_;
    return (*this);
}

AMateria* Fireball::clone() const
{
    return (new Fireball(*this));
}

void Fireball::use(ICharacter& target)
{
    std::cout << C_RED << "* thows a fireball at " << target.getName() << " *\n" << C_END;
}