#include <iostream>
using namespace std;
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     int h = a[9], l = a[0], key, mid;
    cout << "enter key";
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            cout << "found at " << mid;
            return 0;
        }
        else if (key < a[mid])
        {
            h = mid - l;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "not found";
    return 0;
}