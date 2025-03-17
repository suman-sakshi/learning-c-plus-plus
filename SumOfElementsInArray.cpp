#include <iostream>
using namespace std;
int main()
{
   
   
    int arr[7] = {};

    cout << "enter the elements";
    for (int i = 0; i < 7; i++)
    {

        cin >> arr[i];
    }
    cout << "the elements in the array are";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " "<<endl;
       
    }
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum=sum+arr[i];
    }
    cout <<"the sum is "<< sum;
    return 0;
}