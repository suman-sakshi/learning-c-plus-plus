#include <iostream>
using namespace std;
int main()
{
    string str = "today";
    for (int i = 0; str[i] != '\0'; i++)
    {
        {
            str[i] = str[i] - 32;
        }
        cout << str[i];
    }
    // string:: iterator it;
    // for (it = str.begin(); it!=str.end(); it++)
    // {
    //     *it=*it-32;//by subtracting 32 from each letter it turns them in upper case.
    // }
    // cout<<str;
    return 0;
}