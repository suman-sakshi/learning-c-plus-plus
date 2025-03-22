#include <iostream>
using namespace std;
int main()
{
    int A[]={1,2,3,4,5,6};
   int *p=A;
    // cout << ++*p<<endl;
    // p++;
    // cout << *p<<endl;
    // p--;
    // cout << *p<<endl;
    // cout << *(p+2)<<endl;
    // cout << (p)<<endl;
    // cout << (p+1)<<endl;
// for (int i = 0; i < 6; i++)
// {
    // cout << A[i]<<endl;
    // cout << i[A]<<endl;
    // cout << *(A+i)<<endl;
    // cout<< (A+i)<<endl;
    // cout << p+i<<endl;
    //cout << p[i]<<endl;
    //we can also use pointer name instead of array name//. 
// }
cout << p<<endl;
for (int i = 0; i < 6; i++)
{
    cout<<*p<<endl;
    p++;
}
cout << p<<endl;
// the adress of p is not same in the output as the pointer has moved to the location outside. 
// that is after last index because every time pointer p was moving forward 

    return 0;
}