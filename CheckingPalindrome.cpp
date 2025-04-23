#include <iostream>
using namespace std;
int main()
{
    string str = "madaM";
    string str2 = "";
    int len = (int)str.length();
    str2.resize(len);
    for (int k = 0; str[k] != '\0'; k++)
    {
        if (str[k] >= 97 && str[k] <= 122)
        {
            str[k] = str[k] - 32;
        }
    }
    cout << str << endl;

    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        str2[i] = str[j];
    }
    str2[len] = '\0';
    if (str.compare(str2) == 0)
        cout << "palindrome";
    else
        cout << "not a palindrome";
    return 0;
}