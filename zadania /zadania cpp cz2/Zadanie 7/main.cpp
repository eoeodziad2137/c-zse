#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	float stopnie;
	const float PI=3.14159;
	
	cout<<"Podaj liczbê stopnii"<<endl;
	cin>>stopnie;
	cout<<"Liczba radnianów"<<stopnie*1*PI/180;
	
	
	return 0;
}
