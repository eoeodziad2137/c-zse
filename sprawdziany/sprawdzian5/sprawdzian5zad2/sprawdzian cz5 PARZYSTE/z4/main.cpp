#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int miesiac,rozmiar;
	system("chcp 1250");
	system("cls");
	cout<<"Podaj miesi¹c Twojego urodzenia: ";
	cin>>miesiac;
	rozmiar = 3 + miesiac;
	int tab[rozmiar];
	int liczba;
	cout<<"Tablica Tab wygl¹da nastepuj¹co: "<<endl;
	for(int i=0;i<rozmiar;i++)
 		{
 		cout<<"Tab["<<i<<"] = "<<i+4<<" ";
 		cout<<"\n"; 
 		}
 	
}
