#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter the age of the person";
    cin >> age;
    // 0-12=young , 12-50=not young
    if (age >= 12 && age <= 50)
    {
        cout << "not young";
    }
    else
    {
        cout << "young";
    }

    return 0;
}