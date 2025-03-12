#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "enter the value of n1,n2,n3";
    cin >> n1 >> n2 >> n3;
    if (n1 > n2 && n1 > n3)
    {
        cout << "n1 is the greatest of three number" << n1;
    }
    else
    {
        if (n2 > n3)
        {
            cout << "n2 is the greatest of three number" << n2;
        }
        else
        {
            cout << "n3 is the greatest of three number" << n3;
        }
    }

    return 0;
}