#ifndef STRATEGIES_LIGHTSHIELD_H
#define STRATEGIES_LIGHTSHIELD_H

#include "Strategies/Spells/ISpell.h"

namespace stg
{

class LightShield : public ISpell
{
public:
    virtual ~LightShield() override = default;
    virtual void LunchSpell() override;
};

} // stg

#endif // STRATEGIES_LIGHTSHIELD_H
