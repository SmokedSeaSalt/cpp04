#include "Character.hpp"

Character::Character(const std::string& name) : name_(name) {}

Character::~Character()
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        delete inventory_[i];
        inventory_[i] = nullptr;
    }
}

Character::Character(const Character& other)
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        delete inventory_[i];
        if (other.inventory_[i] == nullptr)
            inventory_[i] = nullptr;
        else
            inventory_[i] = other.inventory_[i]->clone();
    }
}

Character& Character::operator=(const Character& other)
{
    if (this == &other)
        return (*this);
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        delete inventory_[i];
        if (other.inventory_[i] == nullptr)
            inventory_[i] = nullptr;
        else
            inventory_[i] = other.inventory_[i]->clone();
    }
    return (*this);
}

std::string const& Character::getName() const
{
    return name_;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        if (inventory_[i] == nullptr)
        {
            inventory_[i] = m;
            return;
        }
    }
    return;
}

void Character::unequip(int idx)
{
    if (idx > (INVENTORY_SIZE - 1))
        return;
    inventory_[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > (INVENTORY_SIZE - 1))
        return;
    inventory_[idx]->use(target);
}
