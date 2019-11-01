#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

Date::Date(int yeaar,int month,int day)
{
    setYear(year);
    setMonth(month);
    setDay(day);
}

void Date::setYear(int year)
{
    Year=year;
}
void Date::setMonth(int month)
{
    if(month>=1&&month<=12)
        Month = month;
    else
    {
        cout<<"The month must be 1-12,if not,month will be 1\n"<<endl;
        Month = 1;
    }

}
void Date::setDay(int day)
{
    Day = day;
}

int Date::getYear()
{
    return year;
}
int Date::getMonth()
{
    return Month;
}

int Date::getDay()
{
    return Day;
}

void Date::displayDate()
{
    cout<<"\n the date is: \n"<<month<<"."<<day<<"."<<year;
}
