//2+4+6+...+n
#include<iostream>
using namespace std;
int main()
{
    int n, i, sum=0;
    cout << "Enter the last number: ";
    cin >> n;
    for(i=2; i<=n; i+=2)
        sum = sum + i;
    cout << "Sum = " << sum << endl;
    return 0;
}
