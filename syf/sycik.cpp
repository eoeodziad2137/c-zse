#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
{
	system("chcp 1250");
	system("cls");
	int ilosc,schowek;
	cout<<"Ile elementowa ma by� tablica: ";
	cin>>ilosc;
 	int tablica[ilosc];
 	for(int i = 0;i<ilosc;i++)
 	{
 		cout<<"Podaj "<<(i+1)<<" element tablicy: ";
 		cin>>tablica[i];
	}
	cout<<"Tablica przed sortowaniem";
	for(int i = 0;i<ilosc;i++)
 	cout<<"["<<tablica[i]<<"]";
 	cout<<endl;
 	//Sortowanie
 	for(int j = 0;j<ilosc;j++)
{
 	for(int i = 0;i<ilosc-1;i++)
 	{
 		if(tablica[i]>tablica[i+1])
 		{
 			schowek = tablica[i];
 			tablica[i] = tablica[i+1];
 			tablica[i+1] = schowek;
		}
	}
}
	cout<<"Tablica po sortowaniu";
	for(int i = 0;i<ilosc;i++)
 	cout<<"["<<tablica[i]<<"]";
	return 0;
}
