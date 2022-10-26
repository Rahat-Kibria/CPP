#include <iostream>
#include "separate_class.h"
using namespace std;

int main()
{
    separate_class obj;
    separate_class *p = &obj;
    p -> display();
    return 0;
}
