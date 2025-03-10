#include <iostream>
using namespace std;
int main()
{
    int radius, height;
    float volume;
    cout << "enter the volume of radius, height";
    cin >> radius >> height;
    volume = float(3.14 * height * radius * radius);
    cout << "the volume is" << volume;
    return 0;
}