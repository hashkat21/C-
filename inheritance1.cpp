#include<iostream>
using namespace std;
class A 
{
    private : int x ;
    public  : int y ;
    protected : int z ;

    A() : x(0),y(0),z(0)
    {}
    A(int m, int n ,int o) : x(m),y(n),z(o)
    {}

};

class B : public A 
{
    private : int l;
    public : int w;
    protected : int v;
    void show()
    {
        cout << y << z;

};

int main ()
{
    A obj ;
    B obj1;
   // cout << obj.x;
   // cout << obj.y;
   // cout << obj1.y;
    //cout << obj.z;
   // cout << obj1.z;
}


