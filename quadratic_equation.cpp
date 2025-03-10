#include <iostream>

using namespace std;
#include <cmath>
int main()
{
    float a, b, c;
    float root1, root2;

    cout << "enter the value of a,b,c";
    cin >> a >> b >> c;
    // debu£
    // cout <<a << b<< c; 
    // cout << -b;
    // cout << (b * b - 4 * a * c);
    root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "the roots are " << root1 << " " << root2;
    return 0;
}