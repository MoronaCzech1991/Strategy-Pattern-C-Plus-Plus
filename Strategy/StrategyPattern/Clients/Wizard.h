#ifndef CLIENTS_WIZARD_H
#define CLIENTS_WIZARD_H

#include "Strategies/Armors/IArmor.h"
#include "Strategies/Presentations/IPresentation.h"
#include "Strategies/Spells/ISpell.h"

namespace clt
{
using stg::IArmor;
using stg::IPresentation;
using stg::ISpell;

class Wizard : public IArmor, public IPresentation, public ISpell
{
public:
    Wizard(IArmor* armor, IPresentation* presentation, ISpell* spell);
    ~Wizard();

    virtual void ShowArmor() override;
    virtual void ShowMyWords() override;
    virtual void LunchSpell() override;

private:
    IArmor* _armor;
    IPresentation* _presentation;
    ISpell* _spell;
};

} // namespace clt

#endif // CLIENTS_WIZARD_H
