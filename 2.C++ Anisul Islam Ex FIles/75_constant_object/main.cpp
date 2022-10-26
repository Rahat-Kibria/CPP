#include <iostream>
#include "separate_class.h"
using namespace std;

int main()
{
    const separate_class obj;
    obj.display_const();

    separate_class obj2;
    obj2.display();
    return 0;
}
