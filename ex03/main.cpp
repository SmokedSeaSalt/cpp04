#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Fireball.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        src->learnMateria(new Fireball());

        ICharacter* me = new Character("me");

        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        tmp = src->createMateria("fireball");
        me->equip(tmp);

        ICharacter* bob = new Character("bob");

        me->use(0, *bob);
        me->use(1, *bob);
        me->use(2, *bob);

        delete bob;
        delete me;
        delete src;
    }
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        src->learnMateria(new Fireball());

        Character* me = new Character("me");

        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        tmp = src->createMateria("fireball");
        me->equip(tmp);
        tmp = src->createMateria("fireball");
        me->equip(tmp);

        ICharacter* copy = new Character(*me);

        ICharacter* bob = new Character("target");

        copy->use(0, *bob);
        copy->use(1, *bob);
        copy->use(2, *bob);
        copy->use(3, *bob);

        delete bob;
        delete me;
        delete copy;
        delete src;
    }

    return 0;

    // make test for copy character
}