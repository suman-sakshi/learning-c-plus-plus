#include <iostream>   
using namespace std;
int main()
{
    int m, n, r,sum=0;
    cout << "enter n";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;
        
    }
    if (sum == m)
    {
        cout << "it's a armstrong number";
    }
    else
    {
        cout << "not a armstrong number";
    }
    return 0;
}