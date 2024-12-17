//kullanýcý tarafýndan girilen iki sayý ve yapýalcak iþleme göre 4 iþlem

#include <iostream>

using namespace std;

int main()
{
	char islem;
	int s1,s2,toplam;
	
	bas:
	cout<<"Lutfen islemi seciniz('+'/'-'/'/'/'*'): ";
	cin>>islem;
	if(islem == '+')
	{
		cout<<"Lutfen birinci sayiyi giriniz: ";
		cin>>s1;
		cout<<"Lutfen ikinci sayiyi giriniz: ";
		cin>>s2;
		toplam = s1+s2;
		cout<<"Sonuc= "<<toplam;
	}
	else if(islem == '-')
	{
		cout<<"Lutfen birinci sayiyi giriniz: ";
		cin>>s1;
		cout<<"Lutfen ikinci sayiyi giriniz: ";
		cin>>s2;
		toplam = s1-s2;
		cout<<"Sonuc= "<<toplam;
	}
	else if(islem == '/')
	{
		cout<<"Lutfen birinci sayiyi giriniz: ";
		cin>>s1;
		cout<<"Lutfen ikinci sayiyi giriniz: ";
		cin>>s2;
		toplam = s1/s2;
		cout<<"Sonuc= "<<toplam;
	}
	else if(islem == '*')
	{
		cout<<"Lutfen birinci sayiyi giriniz: ";
		cin>>s1;
		cout<<"Lutfen ikinci sayiyi giriniz: ";
		cin>>s2;
		toplam = s1*s2;
		cout<<"Sonuc= "<<toplam;
	}
	else
	{
		cout<<"Lütfen geçerli bir iþlem giriniz.\n";
		goto bas;
	}
	
}
