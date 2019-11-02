#include <iostream>
using namespace std;
#include "Date.h"
int main()
{
    Date date1(10,31,2019);     //Create a class named date1
    Date date2(13,31,2019);     //Create a class named date2
    date1.displayDate();        //Display date1 value
    date2.displayDate();        //Display date2 value
}
