#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    string name;

public:
    Employee(int n, string p)
    {
        id = n;
        name = p;
    }
    int getId() { return id; }
    string getName() { return name; }
};
class FullTimeEmployee : public Employee
{
private:
    int salary;

public:
    FullTimeEmployee(int n, string p, int sal) : Employee(n, p)
    {
        salary = sal;
    }

    int getSalary()
    {
        return salary;
    }
};
class PartTimeEmployee : public Employee
{
private:
    int wage;

public:
    PartTimeEmployee(int n, string p, int w) : Employee(n, p)
    {
        wage = w;
    }
    int getWage()
    {
        return wage;
    }
};
int main()
{
    PartTimeEmployee p1(1, "sakshi" , 3400);
    FullTimeEmployee p2(2, "shalvi" , 45000);
    cout << "salary of " << p2.getName() << " is " << p2.getSalary() << endl;
    cout << "wage of " << p1.getName() << " is " << p1.getWage() << endl;
}