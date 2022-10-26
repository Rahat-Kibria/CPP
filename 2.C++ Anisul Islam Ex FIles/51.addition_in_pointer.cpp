#include<iostream>
using namespace std;
int main()
{
    int x = 5, y = 6, sum;
    int *p, *q;
    p = &x;
    q = &y;
    sum = *p + *q;
    cout << sum << endl;
    return 0;
}
