#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
int a[3][2];
int b[3][2];
int liczba,iloscw = 0,iloscm = 0,iloscr = 0;
system("chcp 1250");
system("cls");
 for(int i=0;i<3;i++)
 	{
 		for(int j=0;j<2;j++)
 		{
		cout<<"Podaj element macierzy A["<<i<<"]["<<j<<"]: ";
		cin>> liczba;
		a[i][j] = liczba;
 		}
 	}
// drugi
 for(int i=0;i<3;i++)
 	{
 		for(int j=0;j<2;j++)
 		{
		cout<<"Podaj element macierzy B["<<i<<"]["<<j<<"]: ";
		cin>> liczba;
		b[i][j] = liczba;
 		}
 	}
 	
 	cout<<"Macierz A wygl¹da nastepuj¹co: "<<endl;
for(int i1=0;i1<3;i1++)
 	{
 		for(int j1=0;j1<2;j1++)
 		{
 		cout<<a[i1][j1]<<" ";
 		} 
 	cout<<"\n"; 
 	}
 	cout<<"Macierz B wygl¹da nastepuj¹co: "<<endl;
for(int i1=0;i1<3;i1++)
 	{
 		for(int j1=0;j1<2;j1++)
 		{
 		cout<<a[i1][j1]<<" ";
 		} 
 	cout<<"\n"; 
 	} 	
 	cout<<"Macierz C wygl¹da nastepuj¹co: "<<endl;
 for(int i1=0;i1<3;i1++)
 	{
 		for(int j1=0;j1<2;j1++)
 		{
 		int wynik = (a[i1][j1]*4)-(2*b[i1][j1]);
 		cout<<wynik<<" ";
 		if(wynik>2)
 			{
 				iloscw = iloscw + 1;
			}
		else if (wynik < 2)
			{
				iloscm = iloscm + 1;
			}
		else
			{
				iloscr = iloscr + 1;
			}
 		} 
 	cout<<"\n"; 
 	} 
 	cout<<"Liczby wiêksze od dwa = "<<iloscw<<endl;
 	cout<<"Liczby równe od dwa = "<<iloscr<<endl;
 	cout<<"Liczby mniejsze od dwa = "<<iloscm<<endl;
}
