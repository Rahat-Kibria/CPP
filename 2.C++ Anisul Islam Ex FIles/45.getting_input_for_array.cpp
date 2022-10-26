#include<iostream>
using namespace std;
int main()
{
    int num[5], i;
    for(i=0; i<5; i++)
    {
        cout << "Marks for student " << i+1 << " : ";
        cin >> num[i];
    }
    for(i=0; i<5; i++)
    {
        cout << num[i] << endl;
    }
    return 0;
}
