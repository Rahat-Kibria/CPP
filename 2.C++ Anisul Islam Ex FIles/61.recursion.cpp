#include<iostream>
using namespace std;
int fact(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}
int main()
{
    int factorial = fact(5);
    cout << factorial << endl;
    return 0;
}
