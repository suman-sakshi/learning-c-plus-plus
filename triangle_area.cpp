#include <iostream>
using namespace std;
int main()
{
    int base, height;
    float area;
    cout << "enter the value of base ";
    cin >> base;
    cout << "enter the value of height ";
    cin >> height;
    area = float(base * height) / 2;
    cout << "the area is " << area;
    return 0;
}