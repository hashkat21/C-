//operator overloading 
#include<iostream>
using namespace std;
class counter 
{
    int c ;
    public : 
    counter() : c(0)
    {}
    int getc()
    {
        return c;
    }
   
   counter operator++()
   {
    ++c;
    counter temp;
    temp.c =c ;
    return temp;
   }
};
 
 int main ()
 {
    counter c1,c2,c3;
    cout << c1.getc() << endl;
    cout << c2.getc() << endl;
       ++c1;
       ++c2;
       c3=++c1;
       cout << c1.getc() << endl;
       cout << c2.getc() << endl;
       cout << c3.getc() << endl;
       
 }