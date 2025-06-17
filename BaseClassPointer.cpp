#include <iostream>
using namespace std;
 class BasicCar
 {
    public:
    void start()
    {
        cout << "the car starts"<<endl;
    }
 }; 
 class AdvanceCar: public BasicCar
 {
    public:
    void playMusic()
    {
        cout << "the car has music system"<<endl;
    }
 };
int main()
{
   
    AdvanceCar a;
    BasicCar *ptr = &a;
    // ptr-> playMusic(); can't call fun of derive class
    ptr-> start();

    return 0;
}