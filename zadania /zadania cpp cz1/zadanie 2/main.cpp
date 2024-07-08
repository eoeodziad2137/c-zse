#include <iostream>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	
	
	cout<<"Data"<<endl;
	cout<<endl;
	getchar();
	system("Date");
	getchar();
	system("cls"); 
	getchar();
	
	cout<<"Dysk";
	cout<<endl;
	getchar();
	system("dir");
	getchar();
	system("cls"); 
	getchar();
	
	cout<<"Istnieje czy nie?";
	cout<<endl;
	getchar();
	if (system(NULL))
       cout << "Istnieje ";
    else
       cout << "Nie istnieje";
    getchar();
	system("cls"); 
	getchar();
	
	cout<<"czy c++ jest ok???";
	cout<<endl;
	getchar();
	printf("c++ jest ok");
	getchar();
	system("cls"); 
	getchar();
	
	
	return 0;
}
