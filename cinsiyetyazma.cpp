//girilen cinsiyet koduna g�re erkek mi kad�n m� yazan program
#include <iostream>

using namespace std;

int main()
{
	bas:
	char cinsiyet;
	cout<<"Lutfen cinsiyetinizin bas harf�n� girinizi(E/K): ";
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
		cout<<"L�tfen ge�erli bi harf giriniz: \n";
		goto bas;
	}
	return 0;
}
