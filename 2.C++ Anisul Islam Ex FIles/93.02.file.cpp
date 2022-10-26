#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
    ofstream file;
    file.open("93.file2.txt", ios::out | ios::app);
    cout << "Enter your name: ";
    getline(cin, name);
    file << "Welcome! " << name << endl;
    file.close();
    cout << "Data is stored" << endl;
    return 0;
}
