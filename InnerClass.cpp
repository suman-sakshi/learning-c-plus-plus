#include <iostream>
using namespace std;
class Outer
{
    public:
   void fun()
   {
    i.display();
   }

    class inner
    {
        public:
        void display()
        {
            cout << "display of inner "<<endl;
        }
    };
    inner i;
};
int main()
{
    Outer::inner i;
 i.display();
}