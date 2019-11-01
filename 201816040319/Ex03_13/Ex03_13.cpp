// github 3.13
// Invoice class definition.

#include <iostream>
using namespace std;

#include "Invoice.h" // include definition of class Invoice

// function main begins program execution
int main()
{
    string Number;
    string Style;
    int    Sell;
    int    Price;

    cout <<"零件号："<<endl;
    cin  >>Number;
    cout <<"零件描述："<<endl;
    cin  >>Style;
    cout <<"销售总量："<<endl;
    cin  >>Sell;
    cout <<"单价："<<endl;
    cin  >>Price;

    Invoice invoice(Number,Style,Sell,Price);

    cout <<"验证数据："<<invoice.getInvoiceNumber()<<"    "<<invoice.getInvoiceStyle()<<"    "<<invoice.getInvoiceSell()<<"    "<<invoice.getInvoicePrice()<<endl;

    cout <<"计算数据："<<invoice.getInvoiceAmmount();

    return 0;


} // end main


