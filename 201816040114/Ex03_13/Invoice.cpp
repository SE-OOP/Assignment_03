#include <iostream>

using namespace std;
#include "Invoice.h"

Invoice::Invoice(string a,string b,int c,int d )
{
    setPartNumber(a);
    setDescribe(b);
    setSalesAmount(c);
    setPrice(d);
}

void Invoice::setPartNumber(string PN)
{
    pn=PN;
}
string Invoice::getPartNumber()
{
    return pn;
}
void Invoice::setDescribe(string line)
{
    describe=line;
}
string Invoice::getDescribe()
{
    return describe;
}
void Invoice::setSalesAmount(int a)
{
    amount=a;
}
int  Invoice::getSalesAmount()
{
    return amount;
}
void Invoice::setPrice(int a)
{
    price=a;
}
int Invoice::getPrice()
{
    return price;
}
int Invoice::getInvoiceAmount()
{
    if(amount<0||price<0)
    {
        invoiceamount=0;
    }
    else
    {
        invoiceamount=amount*price;
    }
    return invoiceamount;
}
