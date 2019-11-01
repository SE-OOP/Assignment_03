#include <iostream>
using namespace std;

#include "Invoice.cpp"
int main()
{
	Invoice Invoice1("A01","Well",10,15);
	Invoice Invoice2("A02","Well",-1,15);
	Invoice Invoice3("A03","Well",10,-1);
	cout<<"The Invoice1 is "<<Invoice1.getPno()<<","<<Invoice1.getPnoDescribe()<<","<<Invoice1.getA()<<","<<Invoice1.getB()<<endl;
	
	cout<<"The Invoice2 is "<<Invoice2.getPno()<<","<<Invoice2.getPnoDescribe()<<","<<Invoice2.getA()<<","<<Invoice2.getB()<<endl;
	cout<<"The Invoice3 is "<<Invoice3.getPno()<<","<<Invoice3.getPnoDescribe()<<","<<Invoice3.getA()<<","<<Invoice3.getB()<<endl;
	
	cout<<"The InvoiceAmount of Invoice1 is "<<Invoice1.getInvoiceAmount()<<endl;
	cout<<"The InvoiceAmount of Invoice2 is "<<Invoice2.getInvoiceAmount()<<endl;
	cout<<"The InvoiceAmount of Invoice3 is "<<Invoice3.getInvoiceAmount()<<endl;
 } 
