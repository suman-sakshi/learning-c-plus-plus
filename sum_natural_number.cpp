#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum;
    cout << "enter the natural number you want the sum of ";
    cin >> n;
    sum = (n * (n + 1)) / 2;
    cout << "the sum is " << sum;
    return 0;
}
