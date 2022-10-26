#include<iostream>
using namespace std;

class Student
{
    public:
        int id;
        double gpa;
        void display()
        {
            cout << id << " " << gpa << endl;
        }
};

int main()
{
    Student Rahat, Hasan;

    Rahat.id = 101;
    Rahat.gpa = 3.4343;
    Rahat.display();

    Hasan.id = 102;
    Hasan.gpa = 4.4343;
    Hasan.display();

    return 0;
}
