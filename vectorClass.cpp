#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,3,4,6,10,20};
    v.push_back(400);
    v.push_back(30);

    vector<int>::iterator itr;

    cout<<"using iterator"<<endl;

    for(itr=v.begin();itr!=v.end();itr++)
        cout <<++*itr<<endl;

        cout << "using for each loop"<<endl;
    for(int x:v)
    cout<<x<<endl;
    
}