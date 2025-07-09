#include <iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream ofs("my.txt",ios::trunc);
    ofs<<"john"<<endl;
    ofs<<25<<endl;
    ofs<<"cs"<<endl;

    ofs.close();
    
}