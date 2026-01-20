#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
	Cure(std::string const& type);
	~Cure();
	Cure(const Cure& other);
	Cure& operator=(const Cure& other);

	AMateria* clone() const override;
	void use(Icharacter& target);
}