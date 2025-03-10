#include <iostream>
using namespace std;
enum day
{
    mon=1,
    tue,
    wed,
    thur=10,
    fri,
    sat,
    sun
};
int main()
{
    day d;
    // d = mon;
    d=tue;
    cout << d <<", "<< fri;
    return 0;
}