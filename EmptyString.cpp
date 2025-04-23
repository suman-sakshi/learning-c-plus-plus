#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str="hello";
    if (str.empty())
    cout<<"string is empty"<<endl;
    else
    cout << "string is "<< str<<endl;
    return 0;
}