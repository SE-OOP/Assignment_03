#include <iostream>
#include "Invoice.h"
using namespace std;

int main()
{
    string Number;
    string Describe;
    int    Sale;
    int    Price;

    cout <<"Number:"<<endl;
    cin  >>Number;
    cout <<"Describe"<<endl;
    cin  >>Describe;
    cout <<"Salenumber"<<endl;
    cin  >>Sale;
    cout <<"Price"<<endl;
    cin  >>Price;

    Invoice invoice( Number, Describe, Sale, Price);
    cout <<"output"endl;
    cout <<invoice.getInvoiceAmount();
    return 0;

}
