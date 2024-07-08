#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{
system("chcp 1250");
	
int ZA[2][5], numb;

// wczytywanie macierzy
for(int i=0;i<2;i++)
 	{
 		for(int j=0;j<5;j++)
 		{
 			do
	 		{
		 		cout << "Podaj element macierzy ZA["<<i<<"]["<<j<<"]: ";
				cin >> numb;
				if(numb % 2 == 0)
				cout<<"Liczba musi byæ nieparzysta!"<<endl;
			}
			while(numb % 2 != 1);
			
			ZA[i][j] = numb;	
 		}
 	}


 // wyswietlanie macierzy 
 
 cout << " \n Macierz ZA bdzie wygl¹da³a nastêpuj¹co: \n";
for(int ii=0;ii<2;ii++)
 {
	 for(int ji=0;ji<5;ji++)
	 {
	 	cout << ZA[ii][ji]<<"\t";
	 }
 cout << "\n";
 }

 cout << "\n"; 
 cout << "\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}
