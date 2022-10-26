#include<iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter student number: ";
    cin >> num;
    int student[num];
    for(int i = 0; i <  num; i++) {
        cout << "Marks for student " << i + 1 << " : ";
        cin >> student[i];
        sum = sum + student[i];
    }
    cout << "Total Marks: " << sum << endl;
    cout << "Average Marks: " << (float)sum/num << endl;
    int max = student[0];
    int min = student[0];
    for(int i=1; i<num; i++)
    {
        if(max<student[i])
            max = student[i];
        if(min>student[i])
            min = student[i];
    }
    cout << "Maximum Number : " << max << endl;
    cout << "Minimum Number : " << min << endl;
    return 0;
}
