#include<iostream>
using namespace std;

void subtraction(int, int);
void multiplication(int, int);
void division(int, int);

int main()
{
    subtraction(30, 10);
    multiplication(30, 10);
    division(8, 5);
    return 0;
}

void subtraction(int a, int b)
{
    int sub = a - b;
    cout << "Sub Result: " << sub << endl;
}
void multiplication(int a, int b)
{
    int mul = a * b;
    cout << "Mul Result: " << mul << endl;
}
void division(int a, int b)
{
    float div = (float) a / b;
    cout << "Div Result: " << div << endl;
}
