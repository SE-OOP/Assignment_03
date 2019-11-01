#include <iostream>
#include<string>

using namespace std;
//Invoice class definition
class Invoice
{
public:
    //constructor initializes part_number, part_description, price and items
    Invoice( string , string , int , int );
    //function to set the part_number
    void setPartNumber(string );
    //function to set the part_description
    void setPartDescription(string );
    //function to set the price
    void setPrice(int );
    //function to set the items
    void setItems(int );
    //function to get part_number
    string getPartNumber() const;
    //function to get part_description
    string getPartDescription() const;
    //function to get price
    int getPrice() const;

    //function to getItems
    int getItems() const;
    int getInvoiceAmount() const;
private:
    string part_number;//a part number
    string part_description;//a part description
    int price;//a price per item
    int items;//a quantity of the item being purchased
};
