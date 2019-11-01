//  Invoice.cpp
//  class member-function definitions.
#include <iostream>
using namespace std;Invoice

#include "Invoice.h" // Invoice class definition


Invoice::Invoice(string number,string style ,int sell ,int price )
{
    setInvoiceNumber(number);
    setInvoiceStyle(style);
    setInvoiceSell(sell);
    setInvoicePrice(price);

}
  //Number
    void   Invoice::setInvoiceNumber(string Number)
    {
        number=Number;
    }
    string Invoice::getInvoiceNumber()
    {
        return number;
    }

  //style
    void   Invoice::setInvoiceStyle(string Style)
    {
        style=Style;
    }
    string Invoice::getInvoiceStyle()
    {
        return style;
    }

  //Sell
    void   Invoice::setInvoiceSell(int Sell)
    {
        if(Sell<=0)
            sell=0;
        else
            sell=Sell;
    }
    int    Invoice::getInvoiceSell()
    {
        return sell;
    }
  //price
    void   Invoice::setInvoicePrice(int Price)
    {
        if(Price<=0)
            price=0;
        else
            price=Price;
    }
    int    Invoice::getInvoicePrice()
    {
        return price;
    }
  //Ammount
    int    Invoice::getInvoiceAmmount()
    {
        return sell*price;
    }
