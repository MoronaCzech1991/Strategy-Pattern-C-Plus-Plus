#ifndef STRATEGIES_WHITEPRESENTATION_H
#define STRATEGIES_WHITEPRESENTATION_H

#include "Strategies/Presentations/IPresentation.h"

namespace stg
{

class WhitePresentation : public IPresentation
{
public:
    virtual ~WhitePresentation() override = default;
    virtual void ShowMyWords() override;
};

} // namespace stg

#endif // STRATEGIES_WHITEPRESENTATION_H
