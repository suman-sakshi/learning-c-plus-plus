#include <iostream>
using namespace std;
class shape
{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;

};
class rectangle: public shape
{
    private:
    float length;
    float breadth;

    public:
    rectangle(float l=1, float b=1)
    {
        length=l;
        breadth=b;
    }
    float area()
    { return length*breadth;}
    float perimeter()
    {return 2*(length+breadth);}

};
class circle: public shape
{
    private:
    float radius;
    public:
    circle(int r)
    {
        radius=r;
    }
    float area()
    {return 3.145*radius*radius;}
    float perimeter()
    {return 3.14*2*radius;}
};
int main()
{
    shape *p=new circle(2);
    cout<<"the area is "<< p-> area()<<endl;
    cout<<"the perimeter is "<< p-> perimeter()<<endl;
    p=new rectangle(12,15);
    cout << "the area is "<<p-> area()<<endl;
    cout << "the perimeter is "<<p->perimeter()<<endl;
    return 0;
}