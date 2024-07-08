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

int main(int argc, char** argv) 
{
	system("chcp 1250");
	
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout<<"+----------------------------------------------------+"<<endl;
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY); 
	cout<<"!		   Stanis³aw Bogdan                  !"<<endl;
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY); 
	cout<<"+----------------------------------------------------+"<<endl;
	
	
	return 0;
}
