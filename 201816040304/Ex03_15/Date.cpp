// Ex03_15: Date.cpp
// Member-function definitions for class Date.
#include <iostream>
using namespace std;

// include definition of class Date from Date.h
#include "Date.h"


// constructor initializes
Date::Date(unsigned int year1, unsigned int month1, unsigned int day1)
{
    setYear(year1);
    setMonth(month1);
    setDay(day1);
}// end Invoice constructor

// function to set the year
void Date::setYear(unsigned int year1)
{
    year = year1;
}// end function setYear

//function to retrieve the  year
unsigned int Date::getYear()
{
    return year;
} // end function getPartNumber

// function to set the part month
void Date::setMonth(unsigned int month1)
{
    if(month1<1||month1>12)
    {
        month1=1;
    }
    month = month1;
} // end function setMonth

// function to retrieve the month
unsigned int Date::getMonth()
{
    return month;
} // end function getMonth

// function to set the day
void Date::setDay(unsigned int day1)
{
    day = day1;
} //end function setDay

// function to retrieve the day
unsigned int Date::getDay()
{
    return day;
} //end function getday

// function to display the message
void Date::displaydate()
{
    cout << "The Date is : " << month << "/" << day << "/" << year << endl;
}// end function displaydate
