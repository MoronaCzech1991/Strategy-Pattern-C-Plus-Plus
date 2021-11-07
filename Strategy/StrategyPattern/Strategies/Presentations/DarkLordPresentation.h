#ifndef STRATEGIES_DARKLORDPRESENTATION_H
#define STRATEGIES_DARKLORDPRESENTATION_H

#include "Strategies/Presentations/IPresentation.h"

namespace stg
{

class DarkLordPresentation : public IPresentation
{
public:
    virtual ~DarkLordPresentation() override = default;
    virtual void ShowMyWords() override;
};

} // namespace stg

#endif // STRATEGIES_DARKLORDPRESENTATION_H
