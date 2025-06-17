#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle();
    rectangle(int l, int b);
    rectangle(rectangle &r);
    int getlength() { return length; }
    int getbreadth() { return breadth; }
    void setlength(int l);
    void setbreadth(int b);
    int area();
    int perimeter();
    bool isSquare();//case sensitive function
    ~rectangle();
};
class Cuboid : public rectangle
{
private:
    int height;

public:
    Cuboid(int h)
    {
        height = h;
    }
    int getHeight() { return height; }
    void setHeight(int h) { height = h; }
    int volume() { return getlength() * getbreadth() * height; }
};
int main()
{
    Cuboid c(5);
    c.setlength(10);
    c.setbreadth(7);
    cout <<"volume is "<< c.volume() << endl;

    return 0;
}
rectangle::rectangle()
{
    length = 1;
    breadth = 1;
}
rectangle::rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

rectangle::rectangle(rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void rectangle::setlength(int l)
{
    length = l;
}
void rectangle::setbreadth(int b)
{
    breadth = b;
}
int rectangle::area()
{
    return length * breadth;
}
int rectangle::perimeter()
{
    return 2 * (length + breadth);
}
bool rectangle::isSquare()
{
    return length == breadth;
}
rectangle::~rectangle()
{
    // cout<<"rectangle Destroyed";
}