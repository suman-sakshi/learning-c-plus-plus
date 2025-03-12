#include <iostream>
using namespace std;
int main()
{
    int marks1, marks2, marks3, total, average;
    cout << "enter the marks of the student ";
    cin >> marks1 >> marks2 >> marks3;
    total = marks1 + marks2 + marks3;
    cout << "total marks is " << total<<endl;
    average = total / 3.0;
    cout << "the average is " << average<<endl;
    if (average >= 60)
    {
        cout << "A grade"<<endl;
    }
    else
    {
        if (average < 60 && average >= 35)
        {
            cout << "B grade ";
        }
        else
        {
            cout << "C grade ";
        }
    }

    return 0;
}
