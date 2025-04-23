#include <iostream>
using namespace std;
int main()
{
    string s="welcome";
    char str[10];
    s.copy(str,s.length());
    cout << s.find("e")<<endl;
    cout << s.find("come")<<endl;
    cout << s.find_first_of("le")<<endl;
    cout<<s.substr(3,4)<<endl;
    cout <<str<<endl;
    return 0;
}