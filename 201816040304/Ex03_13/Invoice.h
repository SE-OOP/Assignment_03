// Ex03_13: Invoice.h
// Definition of Invoice class that stores an instructor's name.
#include <string>// program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
public:
    Invoice(string ,string , unsigned int, unsigned int);// constructor initializes
    void setPartNumber (string); // function to set the part number
    string getPartNumber();// function to retrieve the  part number
    void setPartDescription(string); // function to set the part description
    string getPartDescription();// function to retrieve the part description
    void setQuantity(unsigned int); // function to set the quantity of the item being purchased
    unsigned int getQuantity();// function to retrieve the quantity of the item being purchased
    void setPrice(unsigned int); // function to set the price per item
    unsigned int getPrice();// function to retrieve the price per item

    int getInvoiceAmount();// function to multiplies the quantity by the price per item

private:
    string partNumber; // part number for this Invoice
    string partDescription; // part description for this Invoice
    unsigned int quantity; // a quantity of the item being purchased for this Invoice
    unsigned int price; // a price per item for this Invoice
};
