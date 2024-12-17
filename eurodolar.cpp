//klavyeden girilen tr bazý dolar euro hesabý yapan euro:38.5 dolar : 34.5
#include <iostream>

using namespace std;

int main()
{
	float tr,dolar,euro;
	
	cout<<"Lütfen türk lirasýný giriniz ";
	cin>>tr;
	dolar = tr/34.5;
	euro = tr/38.5;
	cout<<"Dolar: " << dolar << " Euro: "<<euro;
	
	return 0;
}
