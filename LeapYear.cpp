// #include <iostream>
// using namespace std;
// int main()

// {
//     int year;
//     cout << "enter the value of the year";
//     cin >> year;
//     if (year % 4 == 0)
//     {
//         if (year % 100 == 0)
//         {
//             if (year % 400 == 0)
//             {
//                 cout << "Leap year";
//             }
//             else
//             {
//                 cout << "not a Leap Year";
//             }
//         }
//         else
//         {
//             cout << "Leap year";
//         }
//     }
//     else
//     {
//         cout << "not a Leap Year";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    // If the year is divisible by four, it's a leap year. 
    // But if the year can be divided by 100 as well as four, it's not a leap year.
    // However, if the year is divisible by 400, it is a leap year.

    // 2004- Leap Year
    // 2100- Not a leap Year
    // 2000- Leap Year
    int year;
    cout << "Enter year";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << "Leap Year";
            else
                cout << "Not a leap year";
        }
        else
            cout << "Leap Year";
    }
    else
    {
        cout << "Not a leap year";
    }

    return 0;
}