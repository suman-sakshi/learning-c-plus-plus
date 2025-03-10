#include <iostream>
using namespace std;
int main()
{
    float speed, u, v, a;
    cout << "enter the value of u,v and a";
    cin >> u >> v >> a;
    speed = float(v * v - u * u) / (2 * a);
    cout << "the speed is " << speed;
    return 0;
}
