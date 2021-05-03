#ifndef DESIGN_PATTERNS_HPRODUCT_H
#define DESIGN_PATTERNS_HPRODUCT_H
class Product
{
public:
    Product();
    virtual ~Product();

    virtual void Use() = 0;
};

#endif //DESIGN_PATTERNS_HPRODUCT_H