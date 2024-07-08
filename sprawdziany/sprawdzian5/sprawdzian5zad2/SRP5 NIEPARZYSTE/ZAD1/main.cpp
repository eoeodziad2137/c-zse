#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{
system("chcp 1250");
	
	
float macierz[12]; 												// deklaracja tablicy
float suma=0,srednia=0;   // deklaracja sumy i sredniej


// wczytywanie macierzy

 for(int i=0;i<12;i++)
{
		 cout << "podaj element macierzy a"<<"[" <<i<<"]=";
		 cin>> macierz[i];
}
 
 for(int i=0;i<12;i++)
 {
	suma = suma + macierz[i] ; 
	srednia = suma / 12 ;
 }
cout << "\n"; // nowy wiersz

 
 // wyswietlanie macierzy i sredniej
 cout<<"Tablica wyników: [ ";
 for(int ii=0;ii<12;ii++)
 {
 	cout << macierz[ii]<<"\t";
 }
 cout<<" ] ." <<endl<<endl<<endl;
 
float max=macierz[0]; 
float min=macierz[0]; 


 for(int z=0;z<12;z++)
 {
	 if (macierz[z]<min)
	 {
	 	min=macierz[z];
	 }
	 if (macierz[z]>max)
	 {
	 max=macierz[z];
	 }
 }
 
 cout << "max= "<< max <<"\n";
 cout << "\nmin= " << min <<"\n";
 cout << "\nsrednia= " << srednia <<"\n";
 cout<<"\n"; 

 system("PAUSE");
 return EXIT_SUCCESS;
}
