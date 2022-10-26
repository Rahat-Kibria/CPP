#include<iostream>
using namespace std;
void sum(int a, int b)
{
    int x = a + b;
    cout << x << endl;
}
void sum(int a, int b, int c)
{
    int x = a + b + c;
    cout << x << endl;
}
void display(int x)
{
    cout << x << endl;
}
void display(double x)
{
    cout << x << endl;
}
int main()
{
    sum(2, 3);
    sum(2, 3, 4);
    display(2);
    display(2.5);
    return 0;
}
