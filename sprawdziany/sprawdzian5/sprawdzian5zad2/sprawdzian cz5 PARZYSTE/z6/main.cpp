#include <iostream>


using namespace std;
int main(int argc, char** argv)
{
 int a[5][5];
 for(int i=0;i<5;i++)
	 {
	 for(int j=0;j<5;j++)
		 {
		 if(i==j)
		 	a[i][j]=9;
		 else
		 	a[i][j]=i+1;
		 }
	 }
 for(int i1=0;i1<5;i1++)
 {
	 for(int j1=0;j1<5;j1++)
	 {
	 	cout<<a[i1][j1]<<" ";
	 } 
	 cout<<"\n"; 
 } 
 
}
