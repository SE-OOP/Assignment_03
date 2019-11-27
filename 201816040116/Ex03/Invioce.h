#include <string>
using namespace std;
class Invoice
{
    public:
        Invoice(string,string,int,int);     //Initialize Invoice data
        void setpart(string);       //Function set to part
        string getpart();
        void setdescription(string);        //Function set to description
        string getdescription();    //Function get description value
        void setamount(int);        //Function set to amount
        int getamount();        //Function get amount value
        void setprice(int);     //Function set to price
        int getprice();     //Function get price value
        int getInvoiceAmount();     //Function set to invoiceamount
        void displaymessage();      //Display invoice value
    private:                 //Create part,description,amount,price parameter
        string part;
        string description;
        int amount;
        int price;
};

