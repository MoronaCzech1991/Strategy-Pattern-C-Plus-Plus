#include "Clients/Wizard.h"

namespace clt
{

Wizard::Wizard(IArmor* armor, IPresentation* presentation, ISpell* spell) :
    _armor(armor),
    _presentation(presentation),
    _spell(spell)
{
}

Wizard::~Wizard()
{
    delete _armor;
    delete _presentation;
    delete _spell;
}

void Wizard::ShowArmor()
{
    _armor->ShowArmor();
}

void Wizard::ShowMyWords()
{
    _presentation->ShowMyWords();
}

void Wizard::LunchSpell()
{
    _spell->LunchSpell();
}

} // namespace clt
