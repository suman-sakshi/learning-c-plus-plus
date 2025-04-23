#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str="welcome";
    cout << str.length()<<endl;
    str.resize(50);
    cout << str.max_size()<<endl;
    cout << str.capacity()<<endl;

    cout << str<<endl;
    return 0;
}