#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    int i1, i2 = 1;
    cout << "enter two numbers ";
    cin >> n1 >> n2;

    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else if (n2 > n1)
        {
            n2 = n2 - n1;
        }
        cout << n1;
    }

    return 0;
}