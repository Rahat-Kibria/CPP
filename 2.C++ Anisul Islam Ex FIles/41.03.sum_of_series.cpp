//1^5+2^5+3^5+...+n^5
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, i, sum=0;
    cout << "Enter the last number: ";
    cin >> n;
    for(i=1; i<=n; i++)
        sum = sum + pow(i,5);
    cout << "Sum = " << sum << endl;
    return 0;
}
