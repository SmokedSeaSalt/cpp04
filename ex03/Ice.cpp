#include "Ice.hpp"
#include "ICharacter.hpp"
#include "terminalOutput.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice& other) : AMateria(other.type_) {}

Ice& Ice::operator=(const Ice& other)
{
    if (this == &other)
        return (*this);
    this->type_ = other.type_;
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << C_BLUE << "* shoots an ice bolt at " << target.getName() << " *\n" << C_END;
}