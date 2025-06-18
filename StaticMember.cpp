#include <iostream>
using namespace std;
class student
{
    public:
    int rollNo;
    string name;
    static int addminNo;
    student(string n)
    {
        addminNo++;
        rollNo=addminNo;
        name =n;
    }
    void display()
    {
        cout << "name "<<name<<endl<<"roll "<<rollNo<<endl;
    }
};
int student::addminNo =0;

int main()
{
   student s1("sakshi");
   student s2("shalvi");
   student s3("priyandshu");
   s1.display();
   s2.display();
   s3.display();
    cout << "number of admission "<<student::addminNo<<endl;
    return 0;
}