#include <iostream>
using namespace std;
int main()
{
    float numerator, denominator, result;
    cout << "enter the value of nemurator,denominator";
    cin >> numerator >> denominator;
    if (denominator == 0)
    {
        cout << "not divisible";
    }
    else
    {
        result = numerator / denominator;
        cout << result;
    }

    return 0;
}