#include <iostream>
using namespace std;
class StackOverFlow : exception
{
};
class StackUnderFlow : exception
{
};
class Stack
{
private:
    int *stk;
    int top = -1;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        stk = new int[size];
    }
    void push(int x)
    {
        if (top == size - 1)
            throw StackOverFlow();
        top++;
        stk[top] = x;
    }
    int pop()
    {
        if (top == -1)
            throw StackUnderFlow();
        return stk[top--];
    }
};
int main()
{
    Stack s(5);
    try
    {
        // s.push(3);
        // s.push(4);
        // s.push(10);
        // s.push(9);
        // s.push(8);
        // s.push(100);
// if uncomment all object than stack overflow
        // if comment out all object than stack underflow
    }
    catch (StackOverFlow &e)
    {
        cout << "stack overflow" << endl;
    }
    try
    {
        cout << "s popped:" << s.pop() << endl;
        cout << "s popped:" << s.pop() << endl;
    }

    catch (StackUnderFlow &e)
    {
        cout << "stack underflow" << endl;
    }
}
