#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int distance, x1,x2,y1,y2;
    cout<<"enter the value of x1,x2,y1,y2: ";
    cin>>x1>>x2>>y1>>y2;
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<"the distance is "<<distance;
    return 0;




}