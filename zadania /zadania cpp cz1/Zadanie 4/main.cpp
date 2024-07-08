#include <iostream>
#include<windows.h>

using namespace std;

void gotoxy(int x, int y) 
{ 
 COORD coord; 
 coord.X = x; 
 coord.Y = y; 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
}

int main(int argc, char** argv)
{
	
	gotoxy(20,1);
	cout<<"/\\" <<endl;
	
	gotoxy(19,2);
	cout<<"//\\\\" <<endl;
	
	gotoxy(18,3);
	cout<<"///\\\\\\" <<endl;
	
	gotoxy(17,4);
	cout<<"////\\\\\\\\" <<endl;
	
	
	//===================================================================
	
	gotoxy(15,5);
	cout<<"//////\\\\\\\\\\\\" <<endl;
	
	gotoxy(14,6);
	cout<<"///////\\\\\\\\\\\\\\" <<endl;
	
	gotoxy(13,7);
	cout<<"////////\\\\\\\\\\\\\\\\" <<endl;
	
	gotoxy(12,8);
	cout<<"/////////\\\\\\\\\\\\\\\\\\" <<endl;
	
	//=================================================================

	gotoxy(10,9);
	cout<<"///////////\\\\\\\\\\\\\\\\\\\\\\" <<endl;
	
	gotoxy(9,10);
	cout<<"////////////\\\\\\\\\\\\\\\\\\\\\\\\" <<endl;
	
	gotoxy(8,11);
	cout<<"/////////////\\\\\\\\\\\\\\\\\\\\\\\\\\" <<endl;
	
	gotoxy(7,12);
	cout<<"//////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\" <<endl;
	
//	<=====================================================================>
	
	
	gotoxy(19,13);
	cout<<"||||" <<endl;
	
	gotoxy(19,14);
	cout<<"||||" <<endl;
	
	gotoxy(19,15);
	cout<<"||||" <<endl;
	
	//<===========================================================================>
	
	gotoxy(19,16);
	cout<<"//\\\\" <<endl;
	
	gotoxy(18,17);
	cout<<"///\\\\\\" <<endl;
	
	cout<<"-------" <<endl;
	return 0;
}
