#include "AMateria.hpp"
#include <string>

AMateria::AMateria(std::string const& type) : type_(type) {}

AMateria::AMateria() {}

// Returns the materia type
std::string const& AMateria::getType() const
{
    return type_;
}