//constructors, adds objects using member functions
#include<iostream>
using namespace std;
class Distance
{
    
    int feet;
    float inches;
    public :
    Distance() : feet(0) , inches(0.0)                              //constructor with no arguments
    {}
    Distance (int ft ,float in) : feet(ft) , inches (in)          //constructor with two arguments
    {}
    void get_dist()
    {
        cout << "\n Enter feet :" ;
        cin >> feet;
        cout << "\n Enter Inches :";
        cin >> inches ;
    }
    void show_dist()
    {
        cout << feet << "  -" << inches << '\"';
    }
    
    void add_dist ( Distance , Distance);
};

    void Distance :: add_dist(Distance d2 , Distance d3)
{
    inches = d2.inches + d3.inches;
    feet =0;
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    feet += d2.feet + d3.feet;
}

int main (){
  Distance dist1,dist3;
  Distance dist2(11,6.25);

  dist1.get_dist();
  dist3.add=dist(dist1,dist2);
  
  cout << "\n dist1 =" ;  dist1.show_dist(); 
  cout << "\n dist2 =" ;  dist2.show_dist(); 
  cout << "\n dist3 =" ;  dist3.show_dist(); 
  cout << endl;
  return 0;
  
}