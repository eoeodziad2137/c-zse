#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	system("chcp 1250");
	system("cls");
	
	const float Pi = 3.14159;
	float rad;
	
	cout<<"Podaj liczb� radian�w:"<<endl;
	cin>>rad;
	cout<<"Warto�� stopni: "<<rad*1*180/Pi; 
	return 0;
}
