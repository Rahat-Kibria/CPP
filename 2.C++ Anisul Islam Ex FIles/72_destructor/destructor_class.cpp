#include <iostream>
#include "destructor_class.h"

using namespace std;
destructor_class::destructor_class()
{
    cout << "Constructor is called" << endl;
}

destructor_class::~destructor_class()
{
    cout << "Destructor is called" << endl;
}
void destructor_class::display()
{
    cout << "Display is called" << endl;
}
