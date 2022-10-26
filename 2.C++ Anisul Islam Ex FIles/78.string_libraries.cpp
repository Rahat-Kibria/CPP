#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char message1[15] = "Bangladesh";
    int length = strlen(message1);
    cout << "Length: " << length << endl;

    char message2[15] = "Rahat";
    char message3[15];
    strcpy(message3, message2);
    cout << "Copied message: " << message3 << endl;

    char message4[15] = "I am ";
    char message5[15] = "a lover";
    strcat(message4, message5);
    cout << "Added message: " << message4 << endl;

    char message6[15] = "Human";
    char message7[15] = "Human";
    strlwr(message6);
    strupr(message7);
    cout << "To lower: " << message6 << endl;
    cout << "To upper: " << message7 << endl;

    char message8[15] = "Human";
    char message9[15] = "human";
    int comp = strcmp(message8, message9);
    if(comp == 0)
        cout << "The strings are equal" << endl;
    else
        cout << "The strings are not equal" << endl;
    return 0;
}
