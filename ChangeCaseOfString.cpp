#include <iostream>
using namespace std;
int main()
{
    string str = "welcome";//also works if string is mixed eg. numbers and character together.
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]>=97 && str[i]<= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    cout << str ;
    return 0;
}