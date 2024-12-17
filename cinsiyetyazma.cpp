//girilen cinsiyet koduna göre erkek mi kadın mı yazan program
#include <iostream>

using namespace std;

int main()
{
	bas:
	char cinsiyet;
	cout<<"Lutfen cinsiyetinizin bas harfını girinizi(E/K): ";
	cin>>cinsiyet;
	if(cinsiyet=='E' || cinsiyet=='e')
	{
		cout<<"Cinsiyetiniz erkek.";
	}
	else if(cinsiyet=='K' || cinsiyet=='k')
	{
		cout<<"Cinsiyetiniz kadin.";
	}
	else
	{
		cout<<"Lütfen geçerli bi harf giriniz: \n";
		goto bas;
	}
	return 0;
}
