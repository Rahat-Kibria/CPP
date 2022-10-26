#include<iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    void display()
    {
        cout << name << endl;
        cout << age << endl;
    }
};

class Student: public Person
{
public:
    int id;
    void display2()
    {
        cout << id << endl;
        display();
    }
};

int main()
{
    Student s1;
    s1.id = 101;
    s1.name = "Rahat";
    s1.age = 32;
    s1.display2();
    return 0;
}
