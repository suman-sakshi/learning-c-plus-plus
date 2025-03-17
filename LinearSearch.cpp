#include <iostream>
using namespace std;
int main()
{
    int n = 10, a[10], key;
    cout << "enter the numbers";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "enter key";
    cin >> key;
    for (int i = 0; i < 10; i++)
    {
        if (key == a[i])
        {
            cout << "found at" << i;
            return 0;
        }
        
    }
    cout << "search unsuccessful";
    return 0;
}