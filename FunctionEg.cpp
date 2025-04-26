#include <iostream>
using namespace std;
void display()
{
    cout << "hello" << endl;
}
float add(float x, float y)
{
    float z;
    z = x + y;
    return z;
}
int maximum(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}
int main()
{
    display();
    float x = 3.5, y = 7.9, z;
      z = add(x, y);
    cout << z<<endl;
    int s = 10, t = 12, u = 5, max;
   
    max = maximum(s, t, u);
    cout << max<<endl;
    return 0;
}