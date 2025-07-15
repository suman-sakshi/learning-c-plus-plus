#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec(5,0);
    vector<char> ve2={'a','b','c','d','e'};
    
    // for (int i = 0; i < 5 ; i++)
    // {
    //     cout<<vec[i]<<endl;
    // }
    for(int i:vec)  //for each loop
    {
        cout<<i<<endl;
    }
 for(char j:ve2)  //for each loop
    {
        cout<<j<<endl;
    }
    return 0;
}