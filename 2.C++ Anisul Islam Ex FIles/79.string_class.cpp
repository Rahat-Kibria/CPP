#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "Rahat";
    string str2 = "Kibria";
    string str3;
    str3 = str1;
    cout << "str1 (copy): " << str3 << endl;
    str3 = str1 + str2;
    cout << "str3 (concat): " << str3 << endl;
    int len = str1.size();
    cout << "Length of str1: " << len << endl;
    return 0;
}
