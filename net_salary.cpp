#include <iostream>
using namespace std;
typedef float basic_salary, percentage_of_deduction, percentage_of_allowance;
int main()
{
    float netsalary;
    basic_salary b;
    percentage_of_allowance a;
    percentage_of_deduction d;
    cout << "enter the value of b , a, d: ";
    cin >> b >> a >> d;
    netsalary = b + b * a/100 - b * d/100;
    cout << "the net salary is " << netsalary<<endl;
    return 0;
}