//1+2+3+...+n
#include<iostream>
using namespace std;
int main()
{
    int n, i, sum=0;
    cout << "Enter the last number: ";
    cin >> n;
    for(i=1; i<=n; i++)
        sum = sum + i;
    cout << "Sum = " << sum << endl;
    return 0;
}
