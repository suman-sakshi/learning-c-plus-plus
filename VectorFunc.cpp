#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 3, 4, 5, 5, 6};
    cout << "size of vector = " << vec.size() << endl;
    cout<<"capacity="<<vec.capacity()<<endl; 
    vec.push_back(8);
    cout << "vector after push back" << endl;
    for (int i : vec)
    {
        cout << i;
    }
    cout << endl;
    cout << "size of vector after push back = " << vec.size() << endl;
    vec.pop_back();
    cout << "vector after pop back" << endl;
    for (int i : vec)
    {
        cout << i;
    }
    cout<<endl;
    cout<<"size="<<vec.size()<<endl;
    cout<<"capacity of vector"<<vec.capacity()<<endl;

    return 0;
}