#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "terminalOutput.hpp"
#include <iostream>
#include <string>

AMateria::AMateria() {}

AMateria::AMateria(std::string const& type) : type_(type) {}

AMateria::AMateria(const AMateria& other) : type_(other.type_) {}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this == &other)
        return (*this);
    this->type_ = other.type_;
    return (*this);
}

// Returns the materia type
std::string const& AMateria::getType() const
{
    return type_;
}

void AMateria::use(ICharacter& target)
{
    std::cout << C_BLUE << "* incorrect usage of AMateria, nothing happens to " << target.getName()
              << " *\n"
              << C_END;
}