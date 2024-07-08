#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{
system("chcp 1250");
	
	
int macierz[8]; // deklaracja tablicy


// wczytywanie macierzy


 cout << "podaj element tablicy F16_ZA"<<"[0]=";
 cin >> macierz[0];
 cout << "podaj element tablicy F16_ZA"<<"[1]=";
 cin >> macierz[1];
 cout << "podaj element tablicy F16_ZA"<<"[2]=";
 cin >> macierz[2];
 cout << "podaj element tablicy F16_ZA"<<"[3]=";
 cin >> macierz[3];
 cout << "podaj element tablicy F16_ZA"<<"[4]=";
 cin >> macierz[4];
 cout << "podaj element tablicy F16_ZA"<<"[5]=";
 cin >> macierz[5];
 cout << "podaj element tablicy F16_ZA"<<"[6]=";
 cin >> macierz[6];
 cout << "podaj element tablicy F16_ZA"<<"[7]=";
 cin >> macierz[7];
 
 float SUMA, CZ1, CZ2, CZ3, CZ4;

 CZ1 = (0.25 * macierz[4]) - 3.0;
 CZ2 = (0.25 * macierz[5]) - 3.0;
 CZ3 = (0.25 * macierz[6]) - 3.0;
 CZ4 = (0.25 * macierz[7]) - 3.0;
 SUMA = CZ1 + CZ2 + CZ3 + CZ4;
 
 // wyswietlanie macierzy i sredniej
 
cout<<endl<<endl<<" Wygl¹d tablicy prezentuje siê nastêpuj¹co: "<<endl;

 for(int ii=0;ii<8;ii++)
 {
 	cout << "F16_KA["<< ii << "] = " << macierz[ii]<<"\n";
 }

cout<<endl<<endl;



cout<<"S = " << SUMA;

cout<<endl<<endl;
 system("PAUSE");
 return EXIT_SUCCESS;
}
