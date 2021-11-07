#ifndef STRATEGIES_ISPELL_H
#define STRATEGIES_ISPELL_H

namespace stg
{

class ISpell
{
public:
    virtual ~ISpell() = default;
    virtual void LunchSpell() = 0;
};

} // stg

#endif // STRATEGIES_ISPELL_H
