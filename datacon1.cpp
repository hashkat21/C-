//conversion of data type from basic to userdefined....
#include<iostream>
using namespace std;
class Distance
{
    float inches ;
    int feet;
   
    public :
    Distance () : inches(0),feet(0)
    {}
    Distance(int m, float n) : inches(n),feet(m)
    { }
    Distance(float meters  )  
    {
        
        float ft = 3.28*meters;
        feet = (int)ft;
        inches = (ft-feet)*12;
    }
  
  void getdist()
  {
    cout << " Enter the distance :" << endl;
    cin >> feet >> inches ;
  }
  void showdist()
  {
    cout << feet << inches << endl;
  }
};


int main ()
{
   Distance d1;
   d1.getdist();
   d1=4.62;
   d1.showdist();

}