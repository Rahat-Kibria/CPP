#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("93.file1.txt");
    file << "Hi! I am Rahat Kibria" << endl << "I live in Dhaka" << endl;
    file.close();
    return 0;
}
