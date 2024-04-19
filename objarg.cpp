//constructors add objects using member function
#include<iostream>
using namespace std;

class Distance
{
    private :
    int feet;
    float inches;
    public :
    Distance() : feet(0),inches(0.0)           // no argument constructor
    {}
    Distance(int ft, float in) : feet(ft) ,inches(in)          // two argument contructor
    {}

    void get_dist()
    {
        cout << "\nEnter the feet:";
        cin >> feet;
        cout << "\nEnter the inches:";
        cin >> inches;
    }
    void show_dist()
    {
        cout << feet <<"\'" << inches << "\"";
    }
    void add_dist( Distance d1 ,Distance d2)
    {
        inches = d1.inches + d2.inches;
        feet=0;
        if(feet >=12.0)
        {
            inches -=12.0;
            feet ++;
        }
        feet=d1.feet+d2.feet;
    }
};

int main ()
{
    Distance dist1,dist3;
    Distance dist2(11,6.25);

    dist1.get_dist();
    dist3.add_dist(dist1,dist2);


    cout << "\nd1=" ;
    dist1.show_dist();
    cout << "\nd2=" ;
    dist2.show_dist();
    cout << "\nd3=" ;
    dist3.show_dist();

    cout << endl;
    return 0;
}