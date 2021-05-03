#include <iostream>
#include "Adapter/Adapter.h"
#include "Adaptee/Adaptee.h"
#include "Adapter/Target.h"

using namespace std;

int main(int argc, char *argv[])
{
    Adaptee * adaptee  = new Adaptee();
    Target * tar = new Adapter(adaptee);
    tar->request();

    return 0;
}
