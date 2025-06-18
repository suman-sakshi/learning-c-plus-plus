#include <iostream>
using namespace std;
class car
{
    public:
    virtual void start()
    {
        cout << "car started"<<endl;
    }
};
class innova: public car
{
    public:
    void start()
    {
        cout << "innova started"<<endl;
    }
};
class swift: public car
{
    public:
    void start()
    {
        cout << "swift started"<<endl;
    }
};

int main()
{
   
    car *ptr= new innova();
    ptr ->start();   
    car *p= new swift();
    p ->start();   

    return 0;
}