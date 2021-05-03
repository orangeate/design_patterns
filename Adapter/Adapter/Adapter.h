#ifndef DESIGN_PATTERNS_ADAPTER_H
#define DESIGN_PATTERNS_ADAPTER_H
#include "Target.h"
#include "../Adaptee/Adaptee.h"

class Adapter : public Target
{
public:
    Adapter(Adaptee *adaptee);
    virtual ~Adapter();

    virtual void request();

private:
    Adaptee* m_pAdaptee;

};
#endif //DESIGN_PATTERNS_ADAPTER_H
