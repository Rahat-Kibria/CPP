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
        void setValue(int a, double b)
        {
            id = a;
            gpa = b;
        }
};

int main()
{
    Student Rahat, Hasan;

    Rahat.setValue(101, 3.4343);
    Rahat.display();

    Hasan.setValue(102, 4.4343);
    Hasan.display();

    return 0;
}

