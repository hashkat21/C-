//function overriding in inheritance
#include<iostream>
#include<process.h>          //for exit
using namespace std;
class stack
{
    protected :
    int st[10];
    int top;
    public :
    stack() : top(-1)
    {}
    void push(int var)
    {
    st[++top]=var;
    }
    int pop()
    {
        return st[--top];
    }
};
class stack2 : public stack
{
    public :
    void push(int var)
    {
    if (top > 9 )
    {
        cout << "Stack overflow";
         //exit(1);
    }
   // else
    stack::push(var);
    }
   
   int pop()
   {
    if(top<0)
    {
        cout << "Stack underflow";
        exit(1);
    }
   // else
    return stack::pop();
    ;
   }



};
int main ()
{
    stack2 obj1;

    obj1.push(11);
    obj1.push(22);
    obj1.push(33);
    cout << endl << obj1.pop();
    cout << endl << obj1.pop();
    cout << endl << obj1.pop();
    cout << endl << obj1.pop();
    return 0;
}