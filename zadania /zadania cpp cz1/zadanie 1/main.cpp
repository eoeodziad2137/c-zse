#include <iostream>
#include <windows.h>
#include <stdlib.h> 

using namespace std;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	
	cout<<"Lp.				Typ			Typowy rozmiar w bajtach				Rozmiar"<<endl;
	cout<<endl;
	cout<<"4			int					2 bajty					-32768 do 32767"<<endl;
	cout<<endl;
	cout<<"8		   	signed Int				4 bajty					-2147483648 do 2147483647"<<endl;
	cout<<endl;
	cout<<"12			double				 	8 bajtów				1.7 E-308 do 1.7 E+308"<<endl;
	cout<<endl;
	cout<<"16			unsigned				4 bajty					0 do 4294967295"<<endl;
	cout<<endl;
	cout<<"20			short					2 bajty 				-32768 do 32767"<<endl;
	cout<<endl;
	cout<<"24			signed long				4 bajty					-2147483648 do 2147483647"<<endl;
	cout<<endl;
	cout<<"28			Signed long long int			8 bajtów				-9223372036854775808 do 9223372036854775807"<<endl;
	
	return 0;
}
