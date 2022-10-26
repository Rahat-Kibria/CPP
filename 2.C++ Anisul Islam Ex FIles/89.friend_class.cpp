#include<iostream>
using namespace std;

class A
{
private:
    int age = 29;
    string name = "Rahat Kibria";

public:
    friend class B;
};

class B
{
public:
    void display(A obj)
    {
        cout << "Age: " << obj.age << endl;
        cout << "Name: " << obj.name << endl;
    }
};

int main()
{
    A obj;
    B obj2;
    obj2.display(obj);

    return 0;
}
