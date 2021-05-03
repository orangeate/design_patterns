#ifndef DESIGN_PATTERNS_ABSTRACTPRODUCTA_H
#define DESIGN_PATTERNS_ABSTRACTPRODUCTA_H

class AbstractProductA
{
public:
    AbstractProductA();
    virtual ~AbstractProductA();

    virtual void use() = 0;

};
#endif //DESIGN_PATTERNS_ABSTRACTPRODUCTA_H
