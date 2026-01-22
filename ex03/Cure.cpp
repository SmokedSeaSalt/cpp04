#include "Cure.hpp"
#include "ICharacter.hpp"
#include "terminalOutput.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {};

Cure::~Cure() {};

Cure::Cure(const Cure& other) : AMateria(other.type_) {};

Cure& Cure::operator=(const Cure& other)
{
    if (this == &other)
        return (*this);
    this->type_ = other.type_;
    return (*this);
};

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << C_GREEN << "* heals " << target.getName() << "'s wounds *\n" << C_END;
}