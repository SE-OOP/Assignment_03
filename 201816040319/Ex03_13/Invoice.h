// github 3.13
// Invoice class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
public:
    Invoice(string number ,string style ,int sell ,int price );

    void   setInvoiceNumber(string Number);
    string getInvoiceNumber();
    void   setInvoiceStyle(string Style);
    string getInvoiceStyle();
    void   setInvoiceSell(int Sell);
    int    getInvoiceSell();
    void   setInvoicePrice(int Price);
    int    getInvoicePrice();
    int    getInvoiceAmmount();

private:
    string number;
    string style;
    int    sell  ;
    int    price;

}; // end class Invoice
