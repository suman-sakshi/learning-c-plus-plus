#include <iostream>
using namespace std;
int main()
{
    string str="sakshisuman@gmail.com";
   int index = str.find('@');
    // cout<<index<<endl;
    cout<<str.substr(0,index)<<endl;
    return 0;
}