#ifndef DESIGN_PATTERNS_SUBJECT_H
#define DESIGN_PATTERNS_SUBJECT_H

class Subject
{
public:
    Subject();
    virtual ~Subject();

    virtual void request();
};
#endif //DESIGN_PATTERNS_SUBJECT_H
