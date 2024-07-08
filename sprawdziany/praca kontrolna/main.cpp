#include <windows.h> 
#include <iostream> 
#include <stdlib.h> 

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
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color|FOREGROUND_INTENSITY);
}

int main()
{
	setcolor(2);
	gotoxy(40, 1);
	cout << "*********"<<endl;
	
	setcolor(4);
	gotoxy(38, 2);
	cout << "*************"<<endl;

	setcolor(6);
	gotoxy(36, 3);
	cout << "*****************"<<endl;

	setcolor(8);
	gotoxy(35, 4);
	cout << "*******************"<<endl;	
	
	setcolor(10);
	gotoxy(33, 5);
	cout << "***********************"<<endl;
	
	setcolor(12);
	gotoxy(32, 6);
	cout << "*************************" << endl;
	
	setcolor(14);
	gotoxy(31, 7);
	cout << "***************************" << endl;

	setcolor(2);
	gotoxy(30, 8);
	cout << "*****************************" << endl;

	setcolor(4);
	gotoxy(29, 9);
	cout << "*******************************" << endl;

	setcolor(6);
	gotoxy(28, 10);
	cout << "*********************************" << endl;
 	
 	setcolor(8);
	gotoxy(28, 11);
	cout << "*********************************" << endl;

	setcolor(10);
	gotoxy(29, 12);
	cout << "*******************************" << endl;

	setcolor(12);
	gotoxy(30, 13);
	cout << "*****************************" << endl;
	
	setcolor(14);
	gotoxy(31, 14);
	cout << "***************************" << endl;

	setcolor(2);
	gotoxy(32, 15);
	cout << "*************************" << endl;

	setcolor(4);
	gotoxy(33, 16);
	cout << "***********************" << endl;

	setcolor(6);
	gotoxy(34, 17);
	cout << "*********************" << endl;

	setcolor(8);
	gotoxy(35, 18);
	cout << "*******************" << endl;

	setcolor(10);
	gotoxy(36, 19);
	cout << "||*************||" << endl;

	//==================================================================================

	setcolor(12);
	gotoxy(36, 20);
	cout << "||  ___&%&___  ||  " << endl;

	setcolor(14);
	gotoxy(36, 21);
	cout << "||	|=======|  ||  " << endl;

	setcolor(2);
	gotoxy(36, 22);
	cout << "||	|=======|  ||  " << endl;

	setcolor(4);
	gotoxy(35, 23);
	cout << "_||__|=======|__||_" << endl;

	setcolor(6);
	gotoxy(34, 24);
	cout << "/ /\\/\\/\\/\\|/\\/\\/\\/\\ \\" << endl;

	setcolor(8);
	gotoxy(33, 25);
	cout << "/ /=================\\ \\" << endl;

	setcolor(10);
	gotoxy(32, 26);
	cout << "/_/___________________\\_\\" << endl;

	setcolor(12);
	gotoxy(32, 27);
	cout << "|		        |" << endl;

	setcolor(14);
	gotoxy(32, 28);
	cout << "|		        |" << endl;	
	
	setcolor(2);
	gotoxy(32, 29);
	cout << "|  __  ..   __          |" << endl;

	setcolor(4);
	gotoxy(32, 30);
	cout << "| /''\\('') ('')   /\\/\\  |" <<endl;

	setcolor(6);
	gotoxy(32, 31);
	cout << "| -||- ||  /||\\   (**)  |" << endl;

	setcolor(8);
	gotoxy(31, 32);
	cout << "/|======================|\\" << endl;

	setcolor(10);
	gotoxy(31, 33);
	cout << "||++++++++++++++++++++++||" << endl;

	setcolor(12);
	gotoxy(31, 34);
	cout << "||======================||" << endl;

	setcolor(14);
	gotoxy(31, 35);
	cout << "\\|______________________|/" << endl;


	return 0;
}
