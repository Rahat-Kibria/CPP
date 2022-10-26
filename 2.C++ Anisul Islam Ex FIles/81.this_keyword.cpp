#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    string name;
    Student(string name)
    {
        this->name = name;
    }
    void display()
    {
        cout << name << endl;
    }
};

int main()
{
    Student s1("Rahat Kibria");
    s1.display();
    return 0;
}
