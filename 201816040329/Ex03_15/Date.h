#include <string>
using namespace std;

class Date
{
public:
    Date(int,int,int);
    void setYear(int);
    void setMonth(int);
    void setDay(int);
    int getYear();
    int getMonth();
    int getDay();
    void displayDate();
private:
    int year;
    int month;
    int day;
};
