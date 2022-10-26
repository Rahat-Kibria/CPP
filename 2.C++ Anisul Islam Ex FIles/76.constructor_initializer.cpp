#include<iostream>
using namespace std;

class Student
{
    public:
        const int admissionFee;
        const int examFee;
        int id;
        Student(int x, int y, int z)
        : admissionFee(x), examFee(y)
        {
            cout << admissionFee << endl;
            cout << examFee << endl;
            id = z;
            cout << id << endl;
        }
};
int main()
{
    Student obj(15000, 400, 101);
    return 0;
}
