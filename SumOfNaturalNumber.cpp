#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "enter n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum of n terms is " << sum;
    return 0;
}