#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
class Date
{
public:
    explicit Date(int,int,int);
    void setYear(int);
    int getYear();
    void setMonth(int);
    int getMonth();
    void setDay(int);
    int getDay();
    void displayDate();
private:
    int year;
    int month;
    int day;
};

#endif // DATE_H_INCLUDED
