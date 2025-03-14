#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    for (;;)
    {
        cout << i << "Hello\n";
        i++;
        if (i > 10)
        {
            // if remove break then it will become an infinite loop.break terminate the loop at the condition mentioned in if statement
            break;
        }
    }

    return 0;
}