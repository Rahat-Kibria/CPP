#include<iostream>
using namespace std;
int main()
{
    int guessed_num, random_num;
    cout << "Guess a number (1-5): ";
    while((scanf("%d", &guessed_num))!=EOF)
    {
        random_num = rand()%5 + 1;
        if(guessed_num == random_num)
        {
            cout << "You guessed correctly" << endl;
        }
        else
        {
            cout << "You guessed wrong. Try again or quit (ctrl+c)" << endl;
            cout << "The random number was: " << random_num << endl;
        }
        cout << "Guess a number (1-5): ";
    }
    return 0;
}
