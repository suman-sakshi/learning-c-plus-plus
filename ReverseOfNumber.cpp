#include <iostream>
using namespace std;
int main()
{
    int r, n, m, rev=0;
    cout << "enter n";
    cin >> n;
    m = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    cout << "the reverse of the number is " << rev;

    return 0;
}