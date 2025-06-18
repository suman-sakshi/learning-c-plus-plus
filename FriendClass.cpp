#include <iostream>
using namespace std;
class your;
class my
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend your;
};
class your
{
    my m;
    public:
    void fun()
    {
        m.a=10;
        m.b=5;
        m.c=40;
        cout << "the value of a "<<m.a<<endl;
        cout << "the value of b "<<m.b<<endl;
        cout << "the value of c "<<m.c<<endl;
    }
};
// this is friend class is used
int main()
{ 
    your y;
    y.fun();
    return 0;
    
}