#ifndef DESIGN_PATTERNS_STATE_H
#define DESIGN_PATTERNS_STATE_H

class Context;

class State
{
public:
    State();
    virtual ~State();

    virtual void handle(Context * c);

};
#endif //DESIGN_PATTERNS_STATE_H
