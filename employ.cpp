// models employ database using inheritance
#include <iostream>
using namespace std;

class employee
{
private:
    char name;
    int number;

public:
    void getdata()
    {
        cout << "Enter the Name :";
        cin >> name;
        cout << "Enter the Number:";
        cin >> number;
    }
    void showdata() 
    {
        cout << "\n Name:" << name;
        cout << "\n Number:" << number;
    }
};

class manager : public employee
{
    private :
    char title;
    int dues;
    public  :
    void getdata()
    {
        employee::getdata();
        cout << "\nEnter the title:" ;
        cin >> title;
        cout << "\nEnter the dues:";
        cin >> dues;
    }
    void showdata()  
    {
        employee ::showdata();
        cout <<"\nTitle:" << title;
        cout <<"\ndues:" << dues;
    }
};

class scientist : public employee
{
   private :
   char Pub;
   public :
   void getdata()
   {
   employee ::getdata();
    cout << "\n Pub? ";
    cin >> Pub;
   }
    
   void showdata() 
   {
    employee ::showdata();
    cout << "\n Pub:" << Pub;
   }
};

class labour : public employee
{

};

int main()
{
    manager m1;
    scientist s1;
    labour l1;
    cout <<"\nEnter data for manager:" << endl;
    m1.getdata();
   
    cout <<"\nEnter data for scientist:";
    s1.getdata();
    cout << "\nEnter data for labour:";
    l1.getdata();
    cout <<"\n data for manager:";
    m1.showdata();
    cout <<"\n data for scientist:";
    s1.showdata();
    cout << "\n data for labour:";
    l1.showdata();
    return 0;
}