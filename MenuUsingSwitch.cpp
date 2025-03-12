#include <iostream>
using namespace std;
int main()
{
    cout << "menu\n";
    cout << "1.add\n"
         << "2. sub\n"
         << "3. mul\n"
         << "4. div\n";

    int option;
    cout << "enter your choice";
    cin >> option;
    int a, b, c;
    cout << "enter 2 number";
    cin >> a >> b;
    switch (option)
    {
    case 1:
        c = a + b;
        // cout << "result is" << c;

        break;
    case 2:
        c = a - b;
        // cout << "result is " << c;
        break;
    case 3:
        c = a * b;
        // cout << "result is " << c;
        break;
    case 4:
        c = a / b;
        // cout << "result is " << c;
        break;
    default:
        cout << "invalid input";
        break;
    }
    cout << "result is " << c;
    return 0;
}