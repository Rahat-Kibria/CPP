#include<iostream>
using namespace std;
int pass_by_value(int x)
{
    x = 4;
    return x;
}
int pass_by_reference(int *x)
{
    *x = 4;
    return *x;
}
int main()
{
    int x = 10;
    cout << "Before passing the value: " << x << endl;

    pass_by_value(x);
    cout << "After passing value (by value): " << x << endl;
    pass_by_reference(&x);
    cout << "After passing value (by reference): " << x << endl;
    return 0;
}
