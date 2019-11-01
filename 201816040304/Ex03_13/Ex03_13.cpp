// Ex03_13: InvociceTest.cpp
// Test program for modified Invoice class.
#include <iostream>

// include definition of class Invoice from Invoice.h
using namespace std;
#include "Invoice.h"

// function main begins program execution
int main()
{
    // create a Invocie object
    Invoice invoice( "003" ,"a Microphone",2,6888);

    // dispaly the message of the invoice
    cout << "partNumber: " << invoice.getPartNumber() << " partDescription: " << invoice.getPartDescription() << endl;
    cout<< "quantitiy: " << invoice.getQuantity() << " price per item: " << invoice.getPrice() << endl;
    cout << "totil: " << invoice.getInvoiceAmount() <<endl << endl;

    return 0;
}// end main
