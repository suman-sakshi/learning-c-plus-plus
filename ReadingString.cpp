#include<iostream> 
using namespace std;
int main()
{
    char n[50];
    char s[100];
    cout << "enter yout name\n";
    // cin >> n; will only print one word
    cin.get(n,50);   //will print the whole sentence
    cin.ignore(); 
    cout << "enter yout name\n";
    cin.get(s,100);
    return 0;
}