#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float b, a, c, discriminant;
    cout << "enter the value of b,a,c";
    cin >> b >> a >> c;
    discriminant = (b * b) - (4 * a * c);
    if (discriminant == 0)
    {
        cout << "real and equal roots";
        cout <<endl<< (-b / (2 * a));
    }
    else
    {
        if (discriminant < 0)
        {
            cout << "imaginary roots";
        }
        else
        {
            cout << "real and unequal roots";
            cout << endl<<(-b+sqrt(discriminant))/ (2 * a);
            cout << endl<<(-b-sqrt(discriminant))/ (2 * a);
        }
    }

    return 0;
}