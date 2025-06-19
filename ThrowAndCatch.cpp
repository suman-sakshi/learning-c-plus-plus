#include <iostream>
using namespace std;
int division(int a , int b)
{
    if(b==0)
    throw 1;
    else
    return a/b;
    
}
int main()
{
    int x=10,y=0,z;
    try
    {
        z=division(x,y);
        cout << z<<endl;
    }
    catch(int e)
    {
        cout << "division by zero "<<endl<<"error "<<e<<endl;
    }
    cout << "byee"<<endl;
    return 0;
}