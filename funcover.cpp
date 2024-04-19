#include <iostream>
using namespace std;


void add(int a, int b)
{
cout << "sum = " << (a + b);
}

void add(double a, double b)
{
	cout << endl << "sum = " << (a + b);
}

void add(float a, float b )
{
    cout << endl << "sum = " << (a + b);
}
int main()
{
    int a,b;
    float a,b;
    double a,b;
	cout << "Enter Value of a:" << endl;
    cin >> a;
    cout << "Enter Value of b:" << endl;
    cin >> b;
    

    add(a,b);
    add(a,b);
    add(a,b);
	return 0;
}
