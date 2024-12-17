//kullanýcý tarafýndan girilen euro dolar bilgisine göre büyük olaný yazdýr
#include <iostream>

using namespace std;

int main()
{
	float euro,dolar;
	cout<<"Lutfen dolar degerini giriniz: ";
	cin>>dolar;
	cout<<"Lutfen euro degerini giriniz: ";
	cin>>euro;
	if(dolar>euro)
	{
		cout<<"Dolar degeri eurodan buyuk.";
	}
	else
	{
		cout<<"Euro degeri dolardan buyuk";
	}
	
	return 0;
}
