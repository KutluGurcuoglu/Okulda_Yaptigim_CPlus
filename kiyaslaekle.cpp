//kullanýcý tarafýndan girilen iki sayýyý karþýlaþtýr büyük olan sayý 100den büüykse 5 artttur küçükse 10 arttýr

#include<iostream>

using namespace std;

int main()
{
	int s1,s2,sonuc;
	cout<<"Lutfen birinci sayiyi giriniz: ";
	cin>>s1;
	cout<<"Lutfen ikinci sayiyi giriniz: ";
	cin>>s2;
	if(s1>s2)
	{
		if(s1>100)
		{
			sonuc = s1+5;
			cout<<sonuc;
		}
		else
		{
			sonuc = s1+5;
			cout<<sonuc;
		}
	}
	else
	{
		if(s2>100)
		{
			sonuc = s2+5;
			cout<<sonuc;	
		}	
		else
		{
			sonuc = s2+10;
			cout<<sonuc;
		}
	}
}
