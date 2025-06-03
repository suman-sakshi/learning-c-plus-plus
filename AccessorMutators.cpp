#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setlength(int l)
    {
        if (length > 0)
            length = l;
        else
            length = 0;
        cout << "wrong input of length" << endl;
    }
    void setbreadth(int b)
    {
        if (breadth > 0)
            breadth = b;
        else
            cout << "wrong input of breadth" << endl;
        breadth = 0;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
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
    Rectangle r;
    r.setlength(10);
    r.setbreadth(-5);
    cout << "area is " << r.area() << endl;
}