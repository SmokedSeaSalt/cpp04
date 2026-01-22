#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

#define INVENTORY_SIZE 4

class Character : public ICharacter
{
    public:
        Character(const std::string& name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        ~Character();

        std::string const& getName() const;
        void               equip(AMateria* m);
        void               unequip(int idx);
        void               use(int idx, ICharacter& target);

    private:
        const std::string name_;

        AMateria* inventory_[INVENTORY_SIZE];
};

#endif // CHARACTER_HPP