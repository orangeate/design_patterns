#ifndef DESIGN_PATTERNS_ABSTRACTION_H
#define DESIGN_PATTERNS_ABSTRACTION_H
#include "../Implementor/Implementor.h"

class Abstraction
{
public:
    Abstraction();
    virtual ~Abstraction();

    Abstraction(Implementor* imp);
    virtual void operation();

protected:
    Implementor* m_pImp;

};
#endif //DESIGN_PATTERNS_ABSTRACTION_H
