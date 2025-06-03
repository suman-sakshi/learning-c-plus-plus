#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r1, r2;
    r1.length = 10;
    r1.breadth = 5;
    cout << "area "<<r1.area() << endl;
    cout <<"perimeter "<< r1.perimeter() << endl;

    r2.length = 10;
    r2.breadth = 5;
    cout <<"area "<< r2.area() << endl;
    cout <<"perimeter "<< r2.perimeter() << endl;

    return 0;
}