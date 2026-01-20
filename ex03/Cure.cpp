#include "Cure.hpp"
#include "terminalOutput.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure(std::string const& type) : type_(type){};
Cure::~Cure(){};
Cure::Cure(const Cure& other){};
Cure& Cure::operator=(const Cure& other){};

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(Icharacter& target)
{
	std::cout << C_BLUE << "* shoots an ice bolt at " << target << " *\n" << C_END;
}