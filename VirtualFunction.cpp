#include <iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout << "display everything"<<endl;
    }
};
class derived : public base
{
    public:
    void display()
    {
        cout << "display whatever it wants"<<endl;
    }
};
int main()
{
    derived d;
  base *ptr= & d;
  ptr->display();
    return 0;
}
