#ifndef STRATEGIES_FULLARMOR_H
#define STRATEGIES_FULLARMOR_H

#include "Strategies/Armors/IArmor.h"

namespace stg
{

class FullArmor : public IArmor
{
public:
    virtual ~FullArmor() override = default;
    virtual void ShowArmor() override;
};

} // namespace stg

#endif // STRATEGIES_FULLARMOR_H
