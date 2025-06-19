#include <iostream>
using namespace std;
class MyException : exception
{
};
int division(int a, int b) throw(MyException)
{
    if (b == 0)
        throw MyException();
    return a / b;
}
int main()
{
    int x = 10, y = 0, z;
    try
    {
         division(x,y);
        z = x / y;
        cout << z << endl;
        
    }
    catch (MyException e)
    {
        cout << "division by zero " << endl<< "eeror" << endl;
    }
    cout << "bye";
}
