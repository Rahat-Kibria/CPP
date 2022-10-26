#include<iostream>
using namespace std;

class MobileUser
{
public:
    void call()
    {
        cout << "Hello!" << endl;
    }
    virtual void sendMessage() = 0;
};

class Karim: public MobileUser
{
public:
    void sendMessage()
    {
        cout << "Hi! This is Karim" << endl;
    }
};

class Rahim: public MobileUser
{
public:
    void sendMessage()
    {
        cout << "Hi! This is Rahim" << endl;
    }
};

int main()
{
    MobileUser *m;
    Karim k;
    Rahim r;

    m = &k;
    m -> call();
    m -> sendMessage();

    m = &r;
    m -> sendMessage();

    return 0;
}
