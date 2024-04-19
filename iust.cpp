//program to print 8 assignment Operator Signs.

#include<iostream>
using namespace std;
void print();
int main(){
   print();
   cout<<"IUST"<<endl;
   print();
   cout<<"CSE"<<endl;
   print();
   return 0;
}
 
 void print(){
    int i;
    for(i=0;i<8;i++)
    cout<<"=";
    cout<<endl;
 }