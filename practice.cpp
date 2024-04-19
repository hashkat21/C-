#include<iostream>
using namespace std;
//function1
/*void starline(); 
int main ()
{
    starline();
    cout <<"HEY MY NAME IS NAVEED" << endl;
    starline();
    cout <<"I LIVE IN LARIYAR TRAL" << endl;
   return 0;
}

void starline ()
{
    for(int j=0;j<45;j++)
    cout << '*' ;
    cout << endl;
}
//function2
void repchar(char,int);
int main ()
{
    repchar('-',43);
    cout <<"MY NAME IS NAVEED AHMAD DAR" << endl;
    repchar('-',43);
    cout <<"I LIVE IN LARIYAR TRAL" << endl;
    repchar('-',43);
    cout << " much obliged" << endl;
    return 0;
}

void repchar (char ch , int n)
{
    for(n=0;n<45;n++)
    cout<<ch;
    cout << endl;
    }

//function3
void repchar(char , int);
int main ()
{
    char chin;
    int nin;
    cout << "Enter a character:" ;
    cin >> chin;
    cout <<"Enter number of times to repeat it:";
    cin >> nin;
    repchar(chin,nin);
    return 0;
}
void repchar(char ch , int n)
{
    for(int j=0;j<n;j++)
    cout << ch ;
    cout << endl;
}
float lbstokg(float);
int main ()
{
    float lbs;
    float kgs;
    cout << "Enter your weight in pounds:" << endl;
    cin >> lbs;
    kgs=lbstokg(lbs);
    cout << "Your weight inn kilograms is " << kgs << endl;
    return 0;
}

float lbstokg(float pounds)
{
    float kilograms =0.453592 * pounds;
    return kilograms;
}

//function overloading

void SumNum(int A, int B);
void SumNum(int A, int B, int C);
void SumNum(int A, int B, int C, int D);

int main()
{      int a,b,c,d;
    cout << "\nEnter the 4 digits in the sequence of a,b,c,d:" << endl;
    cin >> a >> b >> c >> d;
    SumNum(a,b);
    SumNum(a,b,c);
    SumNum(a,b,c,d);
    
    return 0;
}

void SumNum(int A, int B)
{
     cout<< endl << "SUMNUM is : "<< A+B;     
}

void SumNum(int A, int B, int C)
{
     cout<< endl << "SUMNUM is : "<< A+B+C;  
}

void SumNum(int A, int B, int C, int D)
{
     cout<< endl << "SUMNUM is : "<< A+B+C+D;     
}

void masjid();
void masjid(int a );
void masjid(float a , float b);
int main ()
{
    masjid();
    masjid(50);
    masjid(50.0 ,50.0);
    return 0;
}
  void masjid()
  {
    cout <<"1-The Name of the Masjid Sharief is the Umer Caliphate of the Era" << endl;
  }
  void masjid(int a)
  {
    cout << "2-The safah of the masjid is complete" << endl;
  }
  void masjid(float a, float b)
  {
    cout <<  "3-half and half safah make a full one " << endl;
  }
  // calculator using overloading 
   float calculator(int a, float b);
  int main (){
    int a;
    float b;
    float prod;
    cout << "Enter two numbs:" << endl;
    cin >> a >> b;
    prod=calculator(a,b);
    cout << "product is " << prod << endl;
return 0;
  }
  
  float calculator( int a , float b)
  {
     return a*b;
  }

void add(int a, int b);
void add(double a ,double b);
int main ()
{
    add(2,5);
    add(250,500);
}
void add( int a ,int b)
{
    cout << "sum is =" << a+b << endl;
}
void add(double a , double b)
{
    cout << "sum is =" << a+b << endl;
}

//Program on student details using objects and classes
class student 
{
    private:
    string name;
    int rollno;
    int batch;
    string address;
    public:
    void getstudent()
    {
        cout << "\nEnter the Student details as per records:" << endl;
        cin >> name >> rollno >> batch >> address ;
    }
    void displaystudent()
    {
        cout << "Name=" << name << endl <<  rollno << endl <<   batch  << endl <<   address  << endl; 
    }
   };
   int main ()
   {
      student s1,s2,s3;
      int st;

     s1.getstudent();
     s2.getstudent();
     s3.getstudent();

cout << "Would you like to review the details of student first(1/2/3)" << endl;
 cin >> st;
if ( st == 1)
{
    s1.displaystudent();
}
if (st ==2)
{
    s2.displaystudent();
}
if (st== 3)
   {
    s3.displaystudent();
   }
else 
cout << "Invalid Option Selected"  << endl;
return 0;

   }*/
    
   
    