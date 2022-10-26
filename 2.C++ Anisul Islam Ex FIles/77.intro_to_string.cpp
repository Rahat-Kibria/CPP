#include<iostream>
using namespace std;
int main()
{
//    char message[6] = {'h', 'e', 'l', 'l', 'o'};
//    char message[] = {'h', 'e', 'l', 'l', 'o', '\0'};
//    char message[30] = "Rahat Kibria";
    char message[30];
//    cout << message[2];
//    cin >> message;
    gets(message);
    cout << message;
    return 0;
}
