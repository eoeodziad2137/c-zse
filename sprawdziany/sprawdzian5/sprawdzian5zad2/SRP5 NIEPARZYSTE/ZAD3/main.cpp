#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
 system("chcp 1250");
 int a[6][6],n=6;
 
 
 for(int i=0;i<n;i++)
 {
 for(int j=0;j<n;j++)
 {
 if(i==j) {a[i][j]=5;}
 else
 a[i][j]=1;
 }
 } 
 for(int i1=0;i1<n;i1++)
 {
 for(int j1=0;j1<n;j1++)
 {
 cout<<a[i1][j1]<<" ";
 	
 } 
 cout<<"Naciœnij dowolny przycisk, aby przejœæ dalej. ";
 getch();
 
 cout<<"\n"; // tutaj uzyskujemy przejœcie do wiersza poni¿ej
 } 
 
 system("PAUSE");
 return EXIT_SUCCESS;
}
