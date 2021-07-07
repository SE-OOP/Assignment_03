
#include <iostream>
using namespace std;
#include "Date.h"

int main()
{
    int Year,Month,Day;
    Date date(11,11,2019);

    cout<<"Please input the month"<<endl;
    cin>>Month;
    date.setMonth(Month);

    cout<<"Please input the day"<<endl;//change the day
    cin>>Day;
    date.setDay(Day);

    cout<<"Please input the year"<<endl;//change the year
    cin>>Year;
    date.setYear(Year);

    date.displayDate();//display date
