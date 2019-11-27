#include <string>
#include"Invoice.h" 
using namespace std;

Invoice::Invoice(string pnol,string pnodescribel,int al,int bl)
{
	setPno(pnol);
	setPnoDescribe(pnodescribel);
	setA(al);
	setB(bl);
}

void Invoice::setPno(string pnol)
{
	pno = pnol;	
}

string Invoice::getPno()
{
	return pno;
}

void Invoice::setPnoDescribe(string pnodescribel)
{
	pnodescribe = pnodescribel;
}

string Invoice::getPnoDescribe()
{
	return  pnodescribe;
}

void Invoice::setA(int al)
{
	if(al > 0)
		a = al;
	else
		a = 0;
}

int Invoice::getA()
{
	return a;
}

void Invoice::setB(int bl)
{
	if(bl > 0)
		b = bl;
	else
		b = 0;
}

int Invoice::getB()
{
	return b;
}

int Invoice::getInvoiceAmount()
{
	return getA()*getB();
}
  
