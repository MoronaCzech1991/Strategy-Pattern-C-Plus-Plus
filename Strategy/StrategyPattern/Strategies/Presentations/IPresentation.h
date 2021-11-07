#ifndef STRATEGIES_IPRESENTATION_H
#define STRATEGIES_IPRESENTATION_H

namespace stg
{

class IPresentation
{
public:
    virtual ~IPresentation() = default;
    virtual void ShowMyWords() = 0;
};

} // namespace stg

#endif // STRATEGIES_IPRESENTATION_H
