#include <iostream>
using namespace std;
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void gotoxy(int x, int y)
{
    std::cout << "\033[" << y << ";" << x << "H";
    std::cout.flush();
}


void draw()
{
	//Sleep(250);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							12 | FOREGROUND_INTENSITY);
	cout << "*";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							14 | FOREGROUND_INTENSITY);
	cout << "*";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							6 | FOREGROUND_INTENSITY);
	cout << "*";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							10 | FOREGROUND_INTENSITY);
	cout << "*";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							11 | FOREGROUND_INTENSITY);
	cout << "*";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							9 | FOREGROUND_INTENSITY);
	cout << "*";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							13 | FOREGROUND_INTENSITY);
	cout << "*";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
							15 | FOREGROUND_INTENSITY);
}
int main(int argc, char **argv)
{
	system("chcp 1250");
	system("cls");
	int x = 5, y = 80, ilosc;
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x, y);
		draw();
		x++;
		y--;
	}
	for (int i = 0; i < 6; i++)
	{
		gotoxy(x, y);
		draw();
		x = x + 2;
		y--;
	}
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x, y);
		draw();
		x = x + 3;
		y--;
	}
	x = x + 3;
	y = y + 1;
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x, y);
		draw();
		x = x + 3;
		y++;
	}
	for (int i = 0; i < 6; i++)
	{
		gotoxy(x, y);
		draw();
		x = x + 2;
		y++;
	}
	for (int i = 0; i < 5; i++)
	{
		gotoxy(x, y);
		draw();
		x = x + 1;
		y++;
	}
	return 0;
}
