#include <iostream>
using namespace std;
int main()
{
    float amount, totalAmount;

    cout << "enter the value of amount";
    cin >> amount;

    if (amount >= 5000)
    {
        cout << "the dicount percent is 20" << endl;
        totalAmount = amount - amount * 20 / 100.0;
        // cout << "discounted bill " << totalAmount;
    }
    else
    {
        if (amount < 5000 && amount >= 2000)
        {
            cout << "the dicount percent is 10" << endl;
            totalAmount = amount - amount * 10 / 100.0;
            // cout << "discounted bill " << totalAmount;
        }
        else
        {
            cout << "the discount percent is 5 " << endl;
            totalAmount = amount - amount * 5 / 100.0;
            // cout << "discounted bill " << totalAmount;
        }
    }
    cout << "discounted bill " << totalAmount;

    return 0;
}