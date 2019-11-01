#include <iostream>

using namespace std;

class Date
{
private:
    int mouth;//define mouth
    int day;//define day
    int year;//define year
public:
    //constructor initializes year day mouth

   Date(int , int , int );

    //function to set year
    void setYear(int );

    //function to set day
    void setDay(int );


    //function to set mouth
    void setMouth(int );


    //function get the year
    int getYear() const;


    int getDay() const ;

    //function get the mouth
    int getMouth() const;

    //function to display the date
    void displayDate() ;
};
