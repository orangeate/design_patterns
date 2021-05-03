#ifndef DESIGN_PATTERNS_OBSERVER_H
#define DESIGN_PATTERNS_OBSERVER_H
class Subject;

class Observer
{
public:
    Observer();
    virtual ~Observer();

    virtual void update(Subject * sub) = 0;
};

#endif //DESIGN_PATTERNS_OBSERVER_H
