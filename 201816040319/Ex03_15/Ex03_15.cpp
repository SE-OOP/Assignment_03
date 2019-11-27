
// Create Date objects.
#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date

// function main begins program execution
int main()
{
    int Month;
    int Day;
    int Year;
    cout <<"plese input your number"<<endl;
    cout <<"Month(1~12)"<<endl;
    cin  >>Month;
    cout <<"Day"<<endl;
    cin  >>Day;
    cout <<"Year"<<endl;
    cin  >>Year;

    Date date(Month,Day,Year);


    cout <<"检验数据："<<endl;
    cout<<"Month:"<<date.getDateMonth()<<" "<<"Day:"<<date.getDateDay()<<" "<<"Year:"<<date.getDateYear()<<endl;


    cout <<"输出数据:";
    date.getdisplayDate();
    return 0;

} // end main


