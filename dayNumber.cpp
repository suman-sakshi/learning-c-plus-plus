#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "enter the day number ";
    cin >> day ;
    if (day == 1)
    {
        cout << "sunday"<<endl;
    }
    else if (day == 2)
    {
        cout << "monday"<<endl;
    }
    else if (day == 3)
    {
        cout << "tuesday"<<endl;
    }
    else if (day == 4)
    {
        cout << "wednesday"<<endl;
    }
    else if (day == 5)
    {
        cout << "thursday"<<endl;
    }
    else if (day == 6)
    {
        cout << "friday"<<endl;
    }
    else if (day == 7)
    {
         cout << "saturday"<<endl;
    }
    else 
    {
        cout << "invalid input"<<endl;
    }

    return 0;
}