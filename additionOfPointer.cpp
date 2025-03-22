#include <iostream>
using namespace std;
int main()
{

    int A[] = {1, 2, 3, 4, 5, 6};
    int *p = A, *q =& A[4];
    cout << p - q;
    return 0;
    
}