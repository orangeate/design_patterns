#ifndef DESIGN_PATTERNS_REALSUBJECT_H
#define DESIGN_PATTERNS_REALSUBJECT_H
#include "Subject.h"

class RealSubject : public Subject
{
public:
    RealSubject();
    virtual ~RealSubject();

    void request();
};
#endif //DESIGN_PATTERNS_REALSUBJECT_H
