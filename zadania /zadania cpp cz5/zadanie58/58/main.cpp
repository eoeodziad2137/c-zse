#include <iostream>

using namespace std;
int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	int ilosc, tak,nie;
	cout<<"Podaj iloœæ skosków narciarskich odnotowanych przez trenera: ";
	cin>>ilosc;
	int tablica[ilosc];
	int czas[2];
	cout<<"Podaj jakie wyniki skoków uzyska³ zawodnik: ";
	for(int i = 0;i<ilosc;i++)
	cin>>tablica[i];
	cout<<"Podaj d³ugoœæ sprawdzanego okresu: ";
	for(int i = 0;i<2;i++)
	cin>>czas[i];
	for(int i = 0; i<czas[1];i++)
	{
		if(tablica[i]<tablica[i+1])
			tak ++;
		else
			nie ++;
	}	
	if(tak == (ilosc-1))
	cout<<"Jedziesz";
	else
	cout<<"Nie jedziesz";
	return 0;
}
