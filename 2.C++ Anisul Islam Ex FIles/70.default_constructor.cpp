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
        Student(int a, double b)
        {
            id = a;
            gpa = b;
        }
        Student()
        {
            cout << "Default Constructor" << endl;
        }
};

int main()
{
    Student obj;

    Student Rahat(101, 3.4343);
    Rahat.display();

    Student Hasan(102, 4.4343);
    Hasan.display();

    return 0;
}
