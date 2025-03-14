#include <iostream>
using namespace std;
int main()
{
    int n;
    int fact=1;
    cout << "enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "the factorial of " << n << "is" <<fact;

    return 0;
}