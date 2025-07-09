#include <iostream>
#include<set>
using namespace std;
int main()
{
    set<int> v={1,3,4,6,10,10};
    v.insert(400);
    v.insert(30);

    set<int>::iterator itr;

    cout<<"using iterator"<<endl;

    for(itr=v.begin();itr!=v.end();itr++)
        cout <<*itr<<endl;
        /*can't modify value in set as 
        we were doing in list and vector classes*/

        cout << "using for each loop"<<endl;
    for(int x:v)
    cout<<x<<endl;
    
}