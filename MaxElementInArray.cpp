#include <iostream>
using namespace std;
int main()
{
    int n = 7, max;
    int a[7]={1,2,3,4,5,6,7};
    max = a[0];
    for (int i = 0; i < 7; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout <<"max element is "<< max;
    return 0;
}