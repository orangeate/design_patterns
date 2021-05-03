#ifndef DESIGN_PATTERNS_FACADE_H
#define DESIGN_PATTERNS_FACADE_H
#include "../System/SystemA.h"
#include "../System/SystemB.h"
#include "../System/SystemC.h"

class Facade
{

public:
    Facade();
    virtual ~Facade();

    void wrapOpration();

private:
    SystemA *m_SystemA;
    SystemB *m_SystemB;
    SystemC *m_SystemC;
};
#endif //DESIGN_PATTERNS_FACADE_H
