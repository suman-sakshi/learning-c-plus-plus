#include <iostream>
using namespace std;
template<class T>
T maxim(T x,T y){
    return x>y?x:y;
}
int main()
{
    cout<<maxim(10,20)<<endl;
    cout<<maxim(20.55,20.56)<<endl;
    return 0;
}