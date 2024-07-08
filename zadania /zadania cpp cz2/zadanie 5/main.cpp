#include <iostream>
#include<windows.h>

using namespace std;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	int x, y;
	cout<<"Podaj 1 liczbe"<<endl;
	cin>>x;
	cout << endl;
	
	
	cout<<"Podaj 2 liczbe"<<endl;
	cin>>y;
	cout << endl;
	
	cout<<"Dodawanie:" << x+y << endl;
	
	cout<<"Odejmowanie:" << x-y << endl;

	cout<<"Mno¿enie:" << x*y << endl;

	cout<<"Dzielenie:" << x/y << endl;

	cout<<"Reszta z dzielenia:" << x%y << endl;

		
	
	return 0;
}
