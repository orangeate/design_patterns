#ifndef DESIGN_PATTERNS_SUBJECT_H
#define DESIGN_PATTERNS_SUBJECT_H

#include "../Observer/Observer.h"
#include <vector>
using namespace std;

class Subject
{
public:
    Subject();
    virtual ~Subject();
    Observer *m_Observer;

    void attach(Observer * pObserver);
    void detach(Observer * pObserver);
    void notify();

    virtual int getState() = 0;
    virtual void setState(int i)= 0;

private:
    vector<Observer*> m_vtObj;
};
#endif //DESIGN_PATTERNS_SUBJECT_H
