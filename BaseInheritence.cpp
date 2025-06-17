#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "non parameter base" << endl;
    }
    Base(int x)
    {
        cout << "parameter of base" <<x<< endl;
    }
};
class Derived :public Base
{
public:
    Derived()
    {
        cout << " non parameter derived class" << endl;
    }
    Derived(int y)  
    {
        cout << " parameter derived class" << y << endl;
    }
    Derived(int x,int y):Base(x) 
    {
        cout << " parameter derived class" << y << endl;
    }
};
int main()
{
    Derived d (5,10);
}