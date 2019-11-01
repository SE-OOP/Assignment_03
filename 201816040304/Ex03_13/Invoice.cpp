// Ex03_13: Invoice.cpp
// Member-function definitions for class Invoice.
#include <iostream>
using namespace std;

// include definition of class Invoice from Invoice.h
#include "Invoice.h"

// constructor initializes
Invoice::Invoice(string number ,string description , unsigned int quantity, unsigned int price)
{
    setPartNumber(number);
    setPartDescription(description);
    setQuantity(quantity);
    setPrice(price);
}// end Invoice constructor

// function to set the part number
void Invoice::setPartNumber (string number)
{
    partNumber=number;
}// end function setPartNumber

//function to retrieve the  part number
string Invoice::getPartNumber()
{
    return partNumber;
} // end function getPartNumber

// function to set the part description
void Invoice::setPartDescription(string description)
{
    partDescription = description;
} // end function setParrtDsecription

// function to retrieve the part description
string Invoice::getPartDescription()
{
    return partDescription;
} // end function getPartDescription

// function to set the quantity of the item being purchased
void Invoice::setQuantity(unsigned int number)
{
    if(number<0)
        number =0;
    quantity = number;
} //end function setQuantity

// function to retrieve the quantity of the item being purchased
unsigned int Invoice::getQuantity()
{
    return quantity;
} //end function getQuantity

// function to set the price per item
void Invoice::setPrice(unsigned int money)
{
    if(money < 0)
        money =0;
    price = money;
}// end function setPrice

// function to retrieve the price per item
unsigned int Invoice::getPrice()
{
    return price;
} // end function getPrice

// function to multiplies the quantity by the price per item
int Invoice::getInvoiceAmount()
{
    return price*quantity;
}// end function getInvoiceAmount
