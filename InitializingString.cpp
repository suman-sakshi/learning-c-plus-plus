#include <iostream>
using namespace std;
int main()
{
    char x = 'a';
    cout << x << endl;
    char s[10] = "hello";
    cout << s << endl;
    char q[] = "hello";
    cout << q << endl;
    char p[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    cout << p << endl;
    char *z = "hello";
    cout << z << endl;
    char y[] = {65, 66, 67, 68, 0};
    cout << y << endl;
    return 0;
}