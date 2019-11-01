#include <string> 
using namespace std;

class Invoice
{
public:
	Invoice(string,string,int,int);
	void setPno(string);
	string getPno();
	void setPnoDescribe(string);
	string getPnoDescribe();
	void setA(int);
	int getA();
	void setB(int);
	int getB();
	int getInvoiceAmount();
private:
	string pno;
	string pnodescribe;
	int a;
	int b;
};
