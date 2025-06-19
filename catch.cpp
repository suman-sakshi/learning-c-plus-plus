#include <iostream>
using namespace std;
class MyException: exception
{

};
int main()
{
    try
    {
        throw 1.6;
    }
    catch(int e)
    {
        cout << "int catch"<<endl;
    }
    catch( double e)
    {
        cout << "double catch"<<endl;
    }
    catch(char e)
    {
        cout << "char catch"<<endl;

    }
    catch(...)
    {
        cout << "all catch"<<endl;

    }

    return 0;
}