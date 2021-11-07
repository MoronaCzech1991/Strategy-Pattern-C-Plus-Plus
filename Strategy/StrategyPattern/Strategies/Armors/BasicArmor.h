#ifndef STRATEGIES_BASICARMOR_H
#define STRATEGIES_BASICARMOR_H

#include "Strategies/Armors/IArmor.h"

namespace stg
{

class BasicArmor : public IArmor
{
public:
    virtual ~BasicArmor() override = default;
    virtual void ShowArmor() override;
};

} // namespace stg

#endif // STRATEGIES_BASICARMOR_H
