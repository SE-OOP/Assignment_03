
// Date class member-function definitions.
#include <iostream>
using namespace std;

#include "Date.h" // Date class definition

Date::Date(int month,int day,int year)
{

    setDateMonth(month);
    setDateDay(day);
    setDateYear(year);
}
//Year
void Date::setDateYear(int Year)
{
    year=Year;
}
int Date::getDateYear()
{
    return year;
}
//Month
void Date::setDateMonth(int Month)
{
    if(Month>=13)
        month=1;
    else
      month=Month;
}
int Date::getDateMonth()
{
    return month;
}
//Day
void Date::setDateDay(int Day)
{
    day=Day;
}
int Date::getDateDay()
{
    return day;
}

void Date::getdisplayDate( )
{
    cout<<"month/day/year:"<<month<<"/"<<day<<"/"<<year<<endl;
}
