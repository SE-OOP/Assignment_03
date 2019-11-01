#include <iostream>
#include"Date.h"
using namespace std;


int main()
{
    //create one Date object and initializes it
    Date date1(2016, 3, 12);

    //display date11's info
    date1.displayDate();

    //set the mouth to 45
    cout<<"Set the mouth to 45"<<endl;
    date1.setMouth(45);

    //display new date1's info
    cout<<"The new info of date1:"<<endl;
    date1.displayDate();
}//end main
