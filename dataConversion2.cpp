#include<iostream>
using namespace std;

class A
{
    int x;
    protected: int y;
    public: int z;

    A(int n, int m, int o):x(n),y(m),z(o){}
};
class B: public A
{
 private: int l;
 protected: int w;
 public: int v;
 void show(){
    cout<<y<<z;
 }
};

int main()
{
    A obj;
    B obj1;
    cout<<obj1.v;
    cout<<endl<<obj.y;
    cout<<endl<<obj.y;
    cout<<endl<<obj.z;

    return 0;
}
