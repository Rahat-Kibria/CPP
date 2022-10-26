#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
    int age;
    ofstream file;
    file.open("94.file.txt", ios::out | ios::app);

    for(int i = 0; i < 3; i++)
    {
        cout << "Enter your name: ";
        getline(cin, name);
        file << name << endl;

        cout << "Enter your age: ";
        cin >> age;
        file << age << endl;
        cin.ignore();
    }

    file.close();
    cout << "Data is stored" << endl;
    return 0;
}

