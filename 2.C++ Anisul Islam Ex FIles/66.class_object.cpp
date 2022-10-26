#include<iostream>
using namespace std;

class Student
{
    public:
        int id;
        double gpa;
};

int main()
{
    Student Rahat, Hasan;

    Rahat.id = 101;
    Rahat.gpa = 3.334;
    cout << Rahat.id << " " << Rahat.gpa << endl;

    Hasan.id = 102;
    Hasan.gpa = 4.334;
    cout << Hasan.id << " " << Hasan.gpa << endl;

    return 0;
}
