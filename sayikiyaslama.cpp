//kullanýcdan alýnan sayýlarý karþýlama

#include<iostream>

using namespace std;

int main()
{
	int d1,d2;
	cout<<"Lutfen birinci sayiyi giriniz: ";
	cin>>d1;
	cout<<"Lutfen ikinci sayiyi giriniz: ";
	cin>>d2;
	if(d1>d2)
	{
		cout<<"Birinci sayi ikinci sayidan daha buyuk";
	}
	else if(d2/d1)
	{
		cout<<"Ýkinci sayi birinci sayidan daha buyuk";
	}
	else
	{
		cout<<"Ýki sayi birbirine esit";
	}
	
	return 0;
}
