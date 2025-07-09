#include <iostream>
using namespace std;
namespace First
{
    void fun()
    {
        cout<<"first"<<endl;
    }
};
namespace Second
{
    void fun()
    {
        cout << "second"<<endl;
    }
};
using namespace First;
int main()
{
    fun();
    Second:: fun();
    return 0;
}