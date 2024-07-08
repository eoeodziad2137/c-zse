#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int miesiac,rozmiar;
	system("chcp 1250");
	system("cls");
	cout<<"Podaj miesi¹c Twojego urodzenia: ";
	cin>>miesiac;
	rozmiar = 5 + miesiac;
	int ZA[rozmiar];
	int liczba;
	for(int i=0;i<rozmiar;i++)
 		{
 		cout<<"Macierz ZA["<<i<<"] = "<<i*i<<" ";
 		cout<<"\n"; 
 		}
 	
}
