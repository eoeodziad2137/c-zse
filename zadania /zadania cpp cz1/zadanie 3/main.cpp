#include <iostream>
#include <windows.h>
#include <stdlib.h> 

using namespace std;

int main(int argc, char** argv) 
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE); 
	
	system("chcp 1250");
	
	cout<<"+-------------------------------+"<<endl;
	cout<<endl;
	
	
	cout<<"! kolor            !numer koloru!"<<endl;
	cout<<endl;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
	cout<<"+-------------------------------!"<<endl;
	cout<<endl;
	
	cout<<"! wszystkie kolory ! ………....    !"<<endl;
	cout<<endl;
	
	cout<<"+-------------------------------!"<<endl;
	cout<<endl;
	
	
//<=================================================================================================>
		
		
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
	cout<<"! 	bia³y      		 ! 15 oraz 7  !"<<endl;
	cout<<endl;
	
	cout<<"+----------------------------------!"<<endl;
	cout<<endl;
	
	
 	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6 | FOREGROUND_INTENSITY);  
	cout<<"! 	¿ó³ty      	 	! 14 oraz 6  !" << endl;

	cout<<"+----------------------------------!"<<endl;
	cout<<endl;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5 | FOREGROUND_INTENSITY); 
	cout<<"! 	purpurowy  	 	! 13 oraz 5  !" << endl;
	
	cout<<"+----------------------------------!"<<endl;
	cout<<endl;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4 | FOREGROUND_INTENSITY); 
	cout<<"! 	czerwony    	! 12 oraz 4  !" << endl;
	
	cout<<"+----------------------------------!"<<endl;
	cout<<endl;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3 | FOREGROUND_INTENSITY); 
	cout<<"! 	jasnoniebieski  ! 11 oraz 3  !" << endl;
	
	cout<<"+----------------------------------!"<<endl;
	cout<<endl;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2 | FOREGROUND_INTENSITY); 
	cout<<"! 	zielony          ! 10 oraz 2  !  " << endl;
	
	cout<<"+----------------------------------!"<<endl;
	cout<<endl;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1 | FOREGROUND_INTENSITY); 
	cout<<"! ciemnoniebieski  ! 9 oraz 1   !" << endl;
	
	cout<<"+-------------------------------!"<<endl;
	cout<<endl; 
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY); 
	cout<<"! szary            ! 8 oraz 0   !" << endl;
	
	cout<<"+-------------------------------!"<<endl;
	cout<<endl;
	
	return 0;
}
