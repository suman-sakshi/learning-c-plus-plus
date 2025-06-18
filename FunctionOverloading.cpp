#include <iostream>
using namespace std;
class Display
{
    public:
    void display()
    {
        cout << "display anything"<<endl;
    }
};
class Derived: public Display
{
    public:
    void display()
    {
        cout << "display nothing"<<endl;
    }
};
int main()
{
    Display d;
    d.display();
    Derived c;
    c.display(); 
    return 0;
}