#include <iostream>
using namespace std;
#include "Invoice.h"
Invoice::Invoice(string part1,string description1,int amount1,int price1)    //Initialize date data
{
    setpart( part1);
    setdescription( description1);
    setamount( amount1);
    setprice( price1);
}
void Invoice::setpart(string part1)     //Function set to part
{   part=part1;  }
string Invoice::getpart()       //Function get part value
{   return part;    }
void Invoice::setdescription(string description1)    //Function set to description
{   description=description1; }
string Invoice::getdescription()    //Function get description value
{   return description;  }
void Invoice::setamount(int amount1)    //Determine if amount are correct
{   if(amount1<0)
        amount1=0;
    amount=amount1;
}
int Invoice::getamount()        //Function get amount value
{   return amount;  }
void Invoice::setprice(int price1)      //Determine if price are correct
{   if(price1<0)
        price1=0;
    price=price1;    }
int Invoice::getprice()     //Function get price value
{   return price;   }
int Invoice::getInvoiceAmount()     //Function get invoiceamount value
{
    int invoiceamount;
    invoiceamount=amount*price;
    return invoiceamount;
}
void Invoice::displaymessage()      //Display invoice value
{
    cout<<"invoice:\n"<<"part:"<<getpart()<<"\n";
    cout<<"part description:"<<getdescription()<<"\n";
    cout<<"amount:"<<getamount()<<"\n";
    cout<<"price:"<<getprice()<<"\n";
    cout<<"invoiceamount:"<<getInvoiceAmount();
}
