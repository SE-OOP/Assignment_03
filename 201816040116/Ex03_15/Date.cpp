#include <iostream>
using namespace std;
#include "Date.h"
Date::Date(int month1,int day1,int year1)       //Initialize date data
{
    setmonth(month1);  //Function set to month
    setday(day1);      //Function set to day
    setyear(year1);    //Function set to year
}
void Date::setmonth(int month1)      //Determine if the month is correct or set to zero if not
{   if(month1<=0||month1>12)
           month1=1;
    month=month1;
}
int Date::getmonth()         //Function get month value
{   return month;     }
void Date::setday(int day1)     //Function set to day
{   day=day1;   }
int Date::getday()      //Function get day value
{   return day;     }
void Date::setyear(int year1)   //Function set to year
{   year=year1;     }
int Date::getyear()     //Function get year value
{   return year;    }
void Date::displayDate()        //Display date value
{
    cout<<"date:"<<getmonth()<<"/"<<getday()<<"/"<<getyear()<<"\n";
}
