#ifndef DESIGN_PATTERNS_DIRECTOR_H
#define DESIGN_PATTERNS_DIRECTOR_H
#include "../Builder/Builder.h"

class Director
{

public:
    Director();
    virtual ~Director();
    Builder *m_Builder;

    Product* constuct();
    void setBuilder(Builder* buider);

private:
    Builder * m_pbuilder;

};
#endif //DESIGN_PATTERNS_DIRECTOR_H
