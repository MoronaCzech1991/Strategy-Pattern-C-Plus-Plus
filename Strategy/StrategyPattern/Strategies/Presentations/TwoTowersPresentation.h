#ifndef STRATEGIES_TWOTOWERSPRESENTATION_H
#define STRATEGIES_TWOTOWERSPRESENTATION_H

#include "Strategies/Presentations/IPresentation.h"

namespace stg
{

class TwoTowerPresentation : public IPresentation
{
public:
    virtual ~TwoTowerPresentation() override = default;

    virtual void ShowMyWords() override;
};

} // namespace stg

#endif // STRATEGIES_TWOTOWERSPRESENTATION_H
