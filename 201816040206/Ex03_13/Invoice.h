//Github  3.13

#include <iostream>
#include <string.h>

using namespace std;

class Invoice
{
public:
    Invoice (string,string,int ,int );

    void    setInvoiceNumber(string);
    string  getInvoiceNumber();
    void    setInvoiceDescribe(string);
    string  getInvoiceDescribe();
    void    setInvoiceSalenumber (int );
    int     getInvoiceSalenumber();
    void    setInvoiceSaleprice(int );
    int     getInvoiceSaleprice();
    int     getInvoiceAmount();
private:
    string number;
    string describe;
    int    sale;
    int     price;
};
