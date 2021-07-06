#include <iostream>
#include<string>
#include<Invoice.h>
using namespace std;
//Invoice class definition


int main()
{
    //crate one Invoice object
    Invoice item1("007","this is the best one in our store",5,1 );

    //display item1's info
    cout<<"Item1's part number: "<<item1.getPartNumber()<<endl;
    cout<<"Item1's part description: "<<item1.getPartDescription()<<endl;
    cout<<"Item1's price: "<<item1.getPrice()<<endl;
    cout<<"Item1's items: "<<item1.getItems()<<endl;
    cout<<"Item1's amount: "<<item1.getInvoiceAmount()<<endl;

    //set item1's items negative
    cout<<"Set items to negative"<<endl;
    item1.setItems(-45);

    //display item1's amount
    cout<<"Item1's new amount : "<<item1.getInvoiceAmount()<<endl;

}//end main
