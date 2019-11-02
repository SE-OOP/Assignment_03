#include <string>
using namespace std;
class Date
{
    public:
        Date(int,int,int);     //Initialize date data
        void setmonth(int);    //Function set to month
        int getmonth();        //Function get month value
        void setday(int);      //Function set to day
        int getday();          //Function get day value
        void setyear(int);     //Function set to year
        int getyear();         //Function get year value
        void displayDate();    //Display date value
    private:                   //Create date, month, day, year parameter
        int month;
        int day;
        int year;
};
