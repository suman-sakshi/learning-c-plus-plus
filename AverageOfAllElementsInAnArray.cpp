#include <iostream>
using namespace std;
int main()
{
    float A[100];
    int n, i ;
    float average,sum = 0.0;
    cout << "enter the elements ";
    cin >> n;
    cout << "enter the elements of the array ";
    for (i = 0; i < n; i++)
    {
        
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
       sum=sum+A[i];
    }
    
    cout << "sum of all elements is " << sum<<endl;
    average = float(sum / n);
    cout << "the averge is" << average;

    return 0;
}