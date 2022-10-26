#include<iostream>
using namespace std;
int main()
{
    char name[30];
    cout << "Enter your name: ";
//    cin >> name;
    gets(name);
    cout << "Your name is: " << name << endl;
    return 0;
}
