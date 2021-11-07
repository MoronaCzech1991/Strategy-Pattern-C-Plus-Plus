#ifndef STRATEGIES_CREATETHEONERING_H
#define STRATEGIES_CREATETHEONERING_H

#include "Strategies/Spells/ISpell.h"

namespace stg
{

class CreateOneRing : public ISpell
{
public:
    virtual ~CreateOneRing() override = default;
    virtual void LunchSpell() override;
};

} // stg

#endif // STRATEGIES_CREATETHEONERING_H
