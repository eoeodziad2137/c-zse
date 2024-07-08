#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int miesiac,rozmiar;
	system("chcp 1250");
	system("cls");
	cout<<"Podaj miesi¹c Twojego urodzenia: ";
	cin>>miesiac;
	rozmiar = 8 + miesiac;
	float tab[rozmiar];
	float liczba,schowek,suma;
	for(int i=0;i<rozmiar;i++)
 	{
			cout<<"Podaj element tablicy Tab["<<i<<"]: ";
			cin>> liczba;
			tab[i] = liczba;
 	}
 	cout<<"Tablica ocen wygl¹da nastepuj¹co: [";
	for(int i=0;i<rozmiar;i++)
 		{
 		cout<<tab[i]<<" ";
 		}
 	cout<<" ]"<<endl;
 	
 	for(int j = 0;j<rozmiar;j++)
	{
	 	for(int i = 0;i<rozmiar-1;i++)
	 	{
	 		if(tab[i]>tab[i+1])
	 		{
	 			schowek = tab[i];
	 			tab[i] = tab[i+1];
	 			tab[i+1] = schowek;
			}
		}
	}
	
 	cout<<"Najlepsza ocena to: "<<tab[rozmiar-1]<<endl;
 	cout<<"Najgorsza ocena to: "<<tab[0]<<endl;
 	for(int i = 0;i<rozmiar;i++)
 	suma = suma + tab[i];
 	
 	int ilosc = rozmiar-1;
 	cout<<"Œrednia "<<rozmiar;
 	printf(" podanych ocen wynosi: %.2f",suma/rozmiar);
}
