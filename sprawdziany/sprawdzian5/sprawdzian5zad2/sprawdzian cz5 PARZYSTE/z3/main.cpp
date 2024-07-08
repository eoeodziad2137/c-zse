
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int tab[7];
	int liczba;
	float suma = 0;
	system("chcp 1250");
	system("cls");
 	for(int i=0;i<7;i++)
 	{
			cout<<"Podaj element tablicy Tab["<<i<<"]: ";
			cin>> liczba;
			tab[i] = liczba;
 	}
 	
	cout<<"Tablica Tab wygl¹da nastepuj¹co: "<<endl;
	for(int i1=0;i1<7;i1++)
 	{
 		cout<<"Tab["<<i1<<"] = "<<tab[i1]<<" ";
 		cout<<"\n"; 
 		if(i1>=2)
 			suma = suma + (tab[i1]*0.5 - 1) ;
 	}
 	printf("S = %.1f",suma);
}
