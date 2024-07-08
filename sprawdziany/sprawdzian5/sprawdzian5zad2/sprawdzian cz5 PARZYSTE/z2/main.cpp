#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main(int argc, char** argv) 
 {
 	using namespace std;
	int tab[4][2];
	int liczba;
	system("chcp 1250");
	system("cls");
	for(int i=0;i<4;i++)
 	{
 		for(int j=0;j<2;j++)
 		{
 			do
	 		{
		 		cout<<"Podaj element macierzy A["<<i<<"]["<<j<<"]: ";
				cin>> liczba;
				if(liczba % 2 != 0)
				cout<<"Liczba musi byæ parzysta!"<<endl;
			}
			while(liczba % 2 != 0);
			tab[i][j] = liczba;	
 		}
 	}
 	cout<<"Macierz Tablica wygl¹da nastepuj¹co: "<<endl;
	for(int i1=0;i1<4;i1++)
 	{
 		for(int j1=0;j1<2;j1++)
 		{
 		cout<<tab[i1][j1]<<" ";
 		} 
 	cout<<"\n"; 
 	}
}
