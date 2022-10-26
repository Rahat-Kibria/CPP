#include<iostream>
using namespace std;

int x = 9;

int main()
{
    int x = 4;
    cout << "Local variable : " << x << endl;
//    ::x = 7;
    cout << "Global variable: " << ::x << endl;
    return 0;
}
