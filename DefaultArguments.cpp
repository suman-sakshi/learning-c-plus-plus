#include <iostream>
using namespace std;
int max(int a,int b, int c=0)
{
    return a>b&&a>c?a:(b>c?b:c);
}
int sum(int a,int b, int c=0)
{
    return a+b+c;
}
int main()
{
    cout<<sum(10,5)<<endl;
    cout << sum(12,13,14)<<endl;
    cout<<max(10,13)<<endl;
    cout <<max(10,12,6)<<endl;
    return 0;
}