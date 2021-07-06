#include <iostream>
#include "Date.h"
using namespace std;

    //constructor initializes year day mouth
 Date::Date(int year1, int mouth1, int day1)
    {
        day = day1;
        year = year1;
        //if mouth is legal
        if(mouth1 <= 12 && mouth1 >= 1)
            mouth = mouth1;
        //if not set it to 1
        else
            mouth = 1;
    }

    //function to set year
    void Date::setYear(int yyear)
    {
        year = yyear;//store the yyear in year
    }//end function setYear

    //function to set day
    void Date::setDay(int dday)
    {
        day = dday;//store the dday in day
    }//end function setDay

    //function to set mouth
    void Date::setMouth(int mouth1)
    {
        //if mouth is legal
        if(mouth1 <= 12 && mouth1 >= 1)
            mouth = mouth1;
        //if not set it to 1
        else
            mouth = 1;
    }//end function setMouth

    //function get the year
    int Date::getYear() const
    {
        return year;//return year
    }//end function getYear

    //function get the day
    int Date::getDay() const
    {
        return day;//return day
    }//end function getDay

    //function get the mouth
    int Date::getMouth() const
    {
        return mouth;//return mouth
    }//end function getMouth

    //function to display the date
    void Date::displayDate()
    {
        cout<<getMouth()<<"/"<<getDay()<<"/"<<getYear()<<endl;//display
    }
