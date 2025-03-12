#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter the age";
    cin >> age;
    if (age < 0)
    {
        return 0;
    }

    if (age < 12 || age > 50)
    {
        cout << " eligible";
    }
    else
    {
        cout << " not eligible";
    }

    return 0;
}