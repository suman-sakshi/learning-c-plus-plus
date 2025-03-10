#include <iostream>
using namespace std;
int main()
{
    int i = 5, j;
     j=++i;
    //  using more than one increment in same variable in same operation can show error and can give unexpected result
    // j = 2 * ++i + 2 * i++;
     cout<<j<<" "<<i;
     char x=128;
     cout<<x;
    return 0;
}