#ifndef DESIGN_PATTERNS_FACTORY_H
#define DESIGN_PATTERNS_FACTORY_H

#include "../Product/Product.h"
#include <string>
using namespace std;

class Factory
{
public:
    Factory();
    virtual ~Factory();

    static Product * createProduct(string proname);
};

#endif // DESIGN_PATTERNS_FACTORY_H