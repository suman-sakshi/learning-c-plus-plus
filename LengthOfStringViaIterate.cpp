#include <iostream>
using namespace std;
int main()
{
    string::iterator it;
    string str ="welcome";
    int count=0;
    for ( it = str.begin(); it!=str.end(); it++)
    {
        count++;
    }
    cout << count;
    
    return 0;
}