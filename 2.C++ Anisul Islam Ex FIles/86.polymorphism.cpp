#include<iostream>
using namespace std;

class Person
{
public:
    virtual void display()
    {
        cout << "I am a person" << endl;
    }
};

class Teacher : public Person
{
public:
    void display()
    {
        cout << "I am a teacher" << endl;
    }
};

class Student : public Person
{
public:
    void display()
    {
        cout << "I am a student" << endl;
    }
};

int main()
{
    Person *p;
    Teacher t;
    Student s;

    p = &t;
    p -> display();

    p = &s;
    p -> display();

    return 0;
}
