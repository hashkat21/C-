//engldisp.cpp
//demonestration of passing structure as an argument in a function
#include<iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
    
};


void engldisp( Distance );

int main ()
{
    Distance d1,d2;
    //gets length d1 from the user
    cout << "Enter the feet:" << endl;
    cin >> d1.feet;
    cout << "Enter the inches:"<< endl;
    cin >> d1.inches;
    //gets length d2 from the user
    cout << "Enter the feet:" << endl;
    cin >> d2.feet;
    cout << "Enter the inches:"<< endl;
    cin >> d2.inches;
    cout << "\n d1= ";
    engldisp(d1);
    cout << "\n d2= ";
    engldisp(d2);
    cout << endl;
    return 0;
}

void engldisp ( Distance dd)
{
    cout << dd.feet << " \'" << dd.inches << "\"";
}