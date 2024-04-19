//returning the objects from the function 
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
    Distance add_dist( Distance);
    
};

Distance Distance::add_dist(Distance d2)
{
    Distance temp;
    temp.inches=inches+d2.inches;
    if(temp.inches >= 12.0)
    {
        temp.inches -=12.0;
        temp.feet =1;
    }   
    temp.feet +=feet+d2.feet;
    return temp;
}











int main ()
{
    Distance dist1,dist3;
    Distance dist2(11,6.25);

    dist1.get_dist();
    dist3=dist1.add_dist(dist2);


    cout << "\nd1=" ;
    dist1.show_dist();
    cout << "\nd2=" ;
    dist2.show_dist();
    cout << "\nd3=" ;
    dist3.show_dist();

    cout << endl;
    return 0;
}