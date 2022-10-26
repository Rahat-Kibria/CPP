#include<iostream>
using namespace std;

template <class myTemplate>
myTemplate add(myTemplate a, myTemplate b)
{
    return a + b;
}

int main()
{
    cout << add(5, 7) << endl;
    cout << add(5.4, 7.5) << endl;
    return 0;
}
