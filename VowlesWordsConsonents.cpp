#include <iostream>
using namespace std;
int main()
{
    string str = "how are yOu";
    int vowels = 0, consonent = 0, words = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 97 || str[i] == 65 || str[i] == 69 || str[i] == 79 || str[i] == 73 || str[i] == 85 || str[i] == 117 || str[i] == 111 || str[i] == 105 || str[i] == 101)
        {
            vowels++;
        }
        else if ( str[i]>=65 && str[i]<=122  )
        {
            consonent++;
        }
        else if( str[i]=' ')
        {
            words++;
        }
    }
    cout << vowels<<endl;
    cout << consonent<<endl;
    cout<<words<<endl;
    return 0;
}