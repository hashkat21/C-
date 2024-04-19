#include<iostream>
using namespace std;
class Nimaz
{
    public :
    void nimaz_time()
    {
        cout << " Pray your Nimaz on time " << endl;
    }
    public :
    void nafl_nimaz()
    {
        cout << "pray your Nafl Nimaz Anywhere "  << endl;
    }
    protected :
    
        void Farz_nimaz()
        {
            cout << "Do not Miss your Farz Nimaz ever " << endl; 
        }
    
};

class fajr : public Nimaz 
{
   public :
   void fajr_nimaz()
   {
    cout << "The two rakats of fajr nimaz are better than anything else in the world" << endl;
   }
   protected :
   void Asr_nimaz()
   {
    cout << " Asr nimaz has 4 farz rakats " << endl;
   }
   public :
   void Esha_nimaz()
   {
    cout << " Do not miss the esha nimaz ever " << endl;
   }
};

int main ()
{
    fajr day1;
    day1.nimaz_time();
    day1.nafl_nimaz();
   //day1.Farz_nimaz();
    day1.fajr_nimaz();
  //  day1.Asr_nimaz();
    day1.Esha_nimaz();
    return 0;
}