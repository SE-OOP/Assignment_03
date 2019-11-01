// Ex03_15: Date.h
// Definition of Date class that stores an instructor's name.
#include <string>// program uses C++ standard string class
using namespace std;

// Date class definition
class Date
{
public:
    Date(unsigned int, unsigned int, unsigned int);// constructor initializes
    void setYear(unsigned int); // function to set the year
    unsigned int getYear();// function to retrieve the year
    void setMonth(unsigned int); // function to set the quantity of the Month
    unsigned int getMonth();// function to retrieve the quantity of the Month
    void setDay(unsigned int); // function to set the day
    unsigned int getDay();// function to retrieve the day
    void displaydate();// function to display
private:
    unsigned int year; // year for this Date
    unsigned int month; // month for this Date
    unsigned int day; // day for this Date
};
