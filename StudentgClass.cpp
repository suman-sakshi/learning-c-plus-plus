#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int marksphy;
    int markschem;
    int marksmath;

public:
    Student(int r, string n, int p, int c, int m)
    {
        roll = r;
        name = n;
        marksphy = p;
        markschem = c;
        marksmath = m;
    }
    int Total()
    {
        return marksphy + markschem + marksmath;
    }
    char grade()
    {
        float average = Total() / 3;
        if (average >= 60)
            return 'A';
        else if (average < 60 && average >= 40)
            return 'B';

        else if (average < 40 && average >= 33)
            return 'C';

        else
            return 'D';
    }
};
int main()
{

    int p, c, m;
    int r;
    string n;
    cout << "enter the name" << endl;
    getline(cin,n) ;
    cout << "enter the roll no." << endl;
    cin >> r;
    cout << "enter the marks of physics" << endl;
    cin >> p ;
    cout << "enter the marks of maths" << endl;
    cin >> m ;
    cout << "enter the marks of chemistry" << endl;
    cin >> c ;
    Student s(r, n, m, p, c);
    cout << "total marks" << s.Total() << endl;
    cout << "grade" << s.grade() << endl;

    return 0;
}