#include<iostream>
using namespace std;
void display(int a = 10, int b = 20)
{
    cout << a << " " << b << endl;
}
int main()
{
    display();
    display(30, 40);
    display(50);
    return 0;
}
