#include <iostream>

#include "Date.h"

using namespace std;

Date::Date(int monthl,int dayl,int yearl)
{
	setMonth(monthl);
	setDay(dayl);
	setYear(yearl);
}

void Date::setMonth(int monthl)
{
	if(monthl > 0 && monthl < 13 )
		month = monthl;
	else
		month = 1;
}

int Date::getMonth()
{
	return month;
}

void Date::setDay(int dayl)
{
	day = dayl;
}

int Date::getDay()
{
	return day;
}

void Date::setYear(int yearl)
{
	year = yearl;
}

int Date::getYear()
{
	return year;
}

int Date::getdisplayDate()
{
	cout<<"The Date is "<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl;
} 
