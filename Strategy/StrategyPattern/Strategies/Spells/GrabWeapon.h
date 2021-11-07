#ifndef STRATEGIES_GRABWEAPON_H
#define STRATEGIES_GRABWEAPON_H

#include "Strategies/Spells/ISpell.h"

namespace stg
{

class GrabWeapon : public ISpell
{
public:
    virtual ~GrabWeapon() override = default;
    virtual void LunchSpell() override;
};

} // stg

#endif // STRATEGIES_GRABWEAPON_H
