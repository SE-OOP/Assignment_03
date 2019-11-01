// gitub——3.15
// Date class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Date class definition
class Date
{
public:
    Date(int year,int month,int day);

    void setDateYear(int Year);
    int  getDateYear();
    void setDateMonth(int Month);
    int  getDateMonth();
    void setDateDay(int Day);
    int  getDateDay();
    void getdisplayDate( );

private:
    int year;
    int month;
    int day;

}; // end class Employee
