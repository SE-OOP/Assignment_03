#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED
#include <string>
class Invoice
{
public:
    explicit Invoice(string,string,int ,int );
    void setPartNumber(string);
    string getPartNumber();
    void setDescribe(string);
    string getDescribe();
    void setSalesAmount(int);
    int getSalesAmount();
    void setPrice(int);
    int getPrice();
    int getInvoiceAmount();
private:
    string pn;
    string describe;
    int amount;
    int price;
    int invoiceamount;
};



#endif // INVOICE_H_INCLUDED
