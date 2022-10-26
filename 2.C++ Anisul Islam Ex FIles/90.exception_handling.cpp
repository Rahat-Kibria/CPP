#include<iostream>
using namespace std;
int main()
{
    int start;
    while(scanf("%d", &start) != EOF)
    {
        try
        {
            int num1, num2;
            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;
            if(num2 == 0)
            {
                throw -1;
            }
            double result = (double) num1/num2;
            cout << "Result: " << result << endl;
        }
//        catch(int x)
        catch(...)
        {
            cout << "Divide by 0 is not possible" << endl;
            cout << "try again? or exit (ctrl+c)" << endl;
        }
    }
    return 0;
}
