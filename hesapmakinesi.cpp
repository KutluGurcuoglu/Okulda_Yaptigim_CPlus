//kullan�c� taraf�ndan girilen iki say� ve yap�alcak i�leme g�re 4 i�lem

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
		cout<<"L�tfen ge�erli bir i�lem giriniz.\n";
		goto bas;
	}
	
}
