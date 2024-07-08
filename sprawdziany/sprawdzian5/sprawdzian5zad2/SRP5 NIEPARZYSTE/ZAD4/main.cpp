#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{
system("chcp 1250");
	
int P[3][4], R[3][4], Q[3][4]; 

// wczytywanie macierzy
 for(int i=0;i<3;i++)
 {
 for(int j=0;j<4;j++)
 {
 cout << "podaj element macierzy P"<<"[" <<i<<"][" << j<<"]=";
 cin>> P[i][j];
 }
 }
cout << "\n"; // nowy wiersz
 for(int i=0;i<3;i++)
 {
 for(int j=0;j<4;j++)
 {
 cout << "podaj element macierzy R"<<"[" <<i<<"][" << j<<"]=";
 cin>> R[i][j];
 }
 }
 int zero=0,pluszero=0,minuszero=0;
 for(int i=0;i<3;i++)
 {
 for(int j=0;j<4;j++)
 {
 Q[i][j]=R[i][j]-2*P[i][j];
 
 if(Q[i][j]==0)
 {
 	zero = zero + 1;
 }
 if(Q[i][j]<0)
 {
 	minuszero = minuszero + 1;
 }
  if(Q[i][j]>0)
 {
 	pluszero = pluszero + 1;
 }
 }
 }

 cout << "\n";
 // wyswietlanie macierzy 
 cout << "Macierz P bdzie wygl¹da³a nastêpuj¹co: \n";
for(int ii=0;ii<3;ii++)
 {
	 for(int ji=0;ji<4;ji++)
	 {
	 	cout << P[ii][ji]<<"\t";
	 }
 cout << "\n";
 }
 cout << "Macierz R bdzie wygl¹da³a nastêpuj¹co: \n";
for(int ii=0;ii<3;ii++)
 {
	 for(int ji=0;ji<4;ji++)
	 {
	 	cout << R[ii][ji]<<"\t";
	 }
 cout << "\n";
 }
  cout << "Macierz Q bdzie wygl¹da³a nastêpuj¹co: \n";
for(int ii=0;ii<3;ii++)
 {
	 for(int ji=0;ji<4;ji++)
	 {
	 	cout << Q[ii][ji]<<"\t";
	 }
 cout << "\n";
 }


 
cout << "liczb wiêkszych od zera ="<< pluszero << "\n"; 
cout << "liczb mniejszych od zera ="<< minuszero << "\n"; 
cout << "liczb równych zeru ="<< zero << "\n"; 

 cout << "\n"; 
 cout << "\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}
