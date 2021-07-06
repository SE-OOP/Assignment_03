#include <iostream>
#include<string.h>
#include"Incoice.h"
using namespace std;
//Invoice class definition
Invoice::Invoice( string str1, string str2, int price1, int item1)
    {
        part_number = str1;
        part_description = str2;
        price = price1;
        items = item1;
    }//end Invoice constructor

    //function to set the part_number
    void Invoice::setPartNumber(string str1)
    {
        part_number = str1;//store the str1 in the object
    }//end function setPartNumber

    //function to set the part_description
    void Invoice::setPartDescription(string str1)
    {
        part_description = str1;//store the str1 in the object
    }//end function setPartDescription

    //function to set the price
    void Invoice::setPrice(int new_price)
    {
        price = new_price;//store the price in the object
    }//end function setPrice

    //function to set the items
    void Invoice::setItems(int new_item)
    {
        items = new_item;//store the item in the items
    }//end function setItems

    //function to get part_number
    string Invoice::getPartNumber() const
    {
        return part_number;//return object's part_number
    }//end the function getPartNumber

    //function to get part_description
    string Invoice::getPartDescription() const
    {
        return part_description;//return object's part_description
    }//end the function getPartDescription

    //function to get price
    int Invoice::getPrice() const
    {
        return price;//return object's price
    }//end the function getPrice

    //function to getItems
    int Invoice::getItems() const
    {
        return items;//return object's items
    }//end function getItems

    //function to getInvoiceAmount
    int Invoice::getInvoiceAmount() const
    {
        int amount;//define all the price
        amount = price * items;
        if(amount <= 0)
            amount = 0;//if amount is not positive set it to zero
        return amount;//return the amount of the object
    }//end function getInvoiceAmount

