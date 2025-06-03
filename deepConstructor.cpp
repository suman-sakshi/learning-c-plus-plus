#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Rectangle()
    // {
    //     length = 1;
    //     breadth = 1;
    // }
    Rectangle(int l, int b)
    {
        setlength(l);
        setbreadth(b);
    }
    Rectagle(Rectangle & r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    void setlength(int l)
    {
        if (l > 0)
            length = l;
        else
        {
            length = 0;
            cout << "wrong input of length" << endl;
        }
    }
 void setbreadth(int b)
{
    if (b > 0)
        breadth = b;
    else
    {
        breadth = 0;
        cout << "wrong input of breadth" << endl;
    }
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
    Rectangle r1(10, 6);
    Rectangle r2(r1);
    cout << r2.area() << endl;
}
