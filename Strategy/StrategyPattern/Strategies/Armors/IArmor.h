#ifndef STRATEGIES_IARMOR_H
#define STRATEGIES_IARMOR_H

namespace stg
{

class IArmor
{
public:
    virtual ~IArmor() = default;
    virtual void ShowArmor() = 0;
};

} // namespace stg

#endif // STRATEGIES_IARMOR_H
