#ifndef DESIGN_PATTERNS_PRODUCT_H
#define DESIGN_PATTERNS_PRODUCT_H
#include <iostream>
using namespace std;

class Product
{

public:
    Product();
    virtual ~Product();

    void setA(string str);
    void setB(string str);
    void setC(string str);
    void show();

private:
    string m_a;
    string m_b;
    string m_c;
};
#endif //DESIGN_PATTERNS_PRODUCT_H
