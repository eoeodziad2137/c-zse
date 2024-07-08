#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) 
{ 
 COORD coord; 
 coord.X = x; 
 coord.Y = y; 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
}

void setcolor(WORD color)
{ 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color| 
FOREGROUND_INTENSITY);
}

int main(int argc, char** argv)
{
		
	setcolor(4);
	gotoxy(21,3);
	cout<<"_    _"<<endl;
	  
	gotoxy(22,4);
	cout<<"I_   I_I"<<endl;
	
	gotoxy(23,5);
	cout<<"_I  I_I"<<endl;
	
	cout<<endl;
	
	setcolor(4);
	gotoxy(20,1);
	cout<<"---------------------"<<endl;
	
	gotoxy(20,2);
	cout<<"\\                   /"<<endl;
	
	gotoxy(21,3);
	cout<<"\\      _    _     /"<<endl;
	  
	gotoxy(22,4);
	cout<<"\\    I_   I_I   /"<<endl;
	
	gotoxy(23,5);
	cout<<"\\    _I  I_I  /"<<endl;
	 
	gotoxy(24,6);
	cout<<"\\           /"<<endl;
	
	gotoxy(25,7);
	cout<<"\\         /"<<endl;
	
	gotoxy(26,8);
	cout<<"\\       /"<<endl;
	
	gotoxy(27,9);
	cout<<"\\     /"<<endl;
	
	gotoxy(28,10);
	cout<<"\\   /"<<endl;
	
	gotoxy(29,11);
	cout<<"\\ /"<<endl;
	
	setcolor(6);
	gotoxy(21,2);
	cout<<"*******************"<<endl;
	
	gotoxy(22,3);
	cout<<"*****************"<<endl;
	  
	  
	setcolor(8);  
	gotoxy(28,3);
	cout<<"_"<<endl;
	
	setcolor(8);  
	gotoxy(32, 3);
	cout<<"_"<<endl;
	
	setcolor(6);
	gotoxy(23,4);
	cout<<"***************"<<endl;
	
	setcolor(8);
	gotoxy(27,4);
	cout<<"I_ "<<endl;
	
	setcolor(8);
	gotoxy(31,4);
	cout<<"I_I"<<endl;
	
	setcolor(6);
	gotoxy(24,5);
	cout<<"*************"<<endl;
	 
	setcolor(8); 
	gotoxy(28,5);
	cout<<"_I"<<endl;
	
	setcolor(8); 
	gotoxy(31,5);
	cout<<"I_I"<<endl;
	
	setcolor(6);
	gotoxy(25,6);
	cout<<"***********"<<endl;
	
	gotoxy(26,7);
	cout<<"*********"<<endl;
	
	gotoxy(27,8);
	cout<<"*******"<<endl;
	
	gotoxy(28,9);
	cout<<"*****"<<endl;
	
	gotoxy(29,10);
	cout<<"***"<<endl;
	
	gotoxy(30,11);
	cout<<"*"<<endl;
	

	

	

	
	return 0;
}
