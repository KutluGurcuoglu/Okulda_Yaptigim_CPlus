//ucgenin kenalrarýna göre türü

#include <iostream>

using namespace std;

int main()
{
	int k1,k2,k3;
	cout<<"Lutfen ilk kenarý giriniz: ";
	cin>>k1;
	cout<<"Lutfen ikinci kenarý giriniz: ";
	cin>>k2;
	cout<<"Lutfen ucuncu kenarý giriniz";
	cin>>k3;
	if(k1==k2 && k2==k3)
	{
		cout<<"Ucgen esitkenar";
	}
	else if(k1 == k2 || k1 == k3 || k2 == k3)
	{
		cout<<"Ucgen ikizkenar";
	}
	else 
	{
		cout<<"Ucgen cesitkenar";
	}
}
