#include <iostream>
#include "separate_class.h"
using namespace std;

void separate_class::display_const() const
{
    cout << "This is a constant function" << endl;
}

void separate_class::display()
{
    cout << "This is a non-constant function" << endl;
}
