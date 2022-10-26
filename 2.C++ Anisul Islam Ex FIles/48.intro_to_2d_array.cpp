#include<iostream>
using namespace std;
int main()
{
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
//    arr[0][0] = 1;
//    arr[0][1] = 2;
//    arr[0][2] = 3;
//    arr[1][0] = 4;
//    arr[1][1] = 5;
//    arr[1][2] = 6;
//    cout << arr[1][2] << endl;
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}
