#include <iostream>
using namespace std;
int search(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (key == a[i])
            return i;
    return 0;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int k;
    cout << "enter the element to be searched";
    cin >> k;
     int index = search(a, 5, k);
    cout << "element found at " << index;
    return 0;
}