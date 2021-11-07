#ifndef STRATEGIES_ULTIMATEARMOR_H
#define STRATEGIES_ULTIMATEARMOR_H

#include "Strategies/Armors/IArmor.h"

namespace stg
{

class UltimateArmor : public IArmor
{
public:
    virtual ~UltimateArmor() override = default;
    virtual void ShowArmor() override;
};

} // namespace stg

#endif // STRATEGIES_ULTIMATEARMOR_H
