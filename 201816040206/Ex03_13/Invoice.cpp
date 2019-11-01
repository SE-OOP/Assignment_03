//INcoice .cpp

#include <iostream>
#include "Invoice.h"
using namespace std;

Invoice::Invoice(string number,string describe,int sale,int price)
{
    setInvoiceNumber(number);
    setInvoiceDescribe(describe);
    setInvoiceSalenumber(sale);
    setInvoiceSaleprice(price);
}

void Invoice::setInvoiceNumber(string Number)
{
    number=Number;
}
string Invoice::getInvoiceNumber()
{
    return number;
}

void Invoice::setInvoiceDescribe(string Describe)
{
    describe=Describe;
}
string Invoice::getInvoiceDescribe()
{
    return describe;
}
void Invoice::setInvoiceSalenumber(int Sale)
{
    if(Sale<=0)
      sale=0;
    else
        sale=Sale;
}
int Invoice::getInvoiceSalenumber()
{
    return sale;
}
void Invoice::setInvoiceSaleprice(int Price)
{
    if(Price<=0)
        price=0;
    else
        price=Price;
}
int Invoice::getInvoiceSaleprice()
{
    return price;
}

int Invoice::getInvoiceAmount()
{
    return sale*price;
}
