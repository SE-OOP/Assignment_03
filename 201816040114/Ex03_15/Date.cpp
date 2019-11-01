#include <iostream>

using namespace std;
#include "Date.h"

Date::Date(int a,int b,int c)
{
    setYear(a);
    setMonth(b);
    setDay(c);
}

void Date::setYear(int a)
{
    year=a;
}
int Date::getYear()
{
    return year;
}
void Date::setMonth(int a)
{
    month=a;
}
int Date::getMonth()
{
    return month;
}
void Date::setDay(int a)
{
    day=a;
}
int Date::getDay()
{
    return day;
}
void Date::displayDate()
{
    cout<<getYear()<<"/"<<getMonth()<<"/"<<getDay();
}
