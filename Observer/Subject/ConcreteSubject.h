#ifndef DESIGN_PATTERNS_CONCRETESUBJECT_H
#define DESIGN_PATTERNS_CONCRETESUBJECT_H
#include "Subject.h"

class ConcreteSubject : public Subject
{

public:
    ConcreteSubject();
    virtual ~ConcreteSubject();

    virtual int getState();
    virtual void setState(int i);

private:
    int m_nState;

};

#endif //DESIGN_PATTERNS_CONCRETESUBJECT_H
