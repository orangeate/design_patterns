#ifndef DESIGN_PATTERNS_PROXY_H
#define DESIGN_PATTERNS_PROXY_H

#include "../Subject/RealSubject.h"
#include "../Subject/Subject.h"

class Proxy : public Subject
{

public:
    Proxy();
    virtual ~Proxy();

    void request();

private:
    void afterRequest();
    void preRequest();
    RealSubject *m_pRealSubject;

};

#endif //DESIGN_PATTERNS_PROXY_H
