#include <iostream>

using namespace std;
#include "Invoice.h"

int main()
{
    Invoice invoice("C516","to click something",12,13);
    cout<<invoice.getPartNumber()<<" "<<invoice.getDescribe()<<" "<<invoice.getSalesAmount()<<" "<<invoice.getPrice()<<" "<<invoice.getInvoiceAmount();
}
