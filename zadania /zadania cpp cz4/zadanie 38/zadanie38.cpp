#include <iostream>

using namespace std;

void gotoxy(int x, int y)
{
    cout << "\033[" << y << ";" << x << "H";
    cout.flush();
}

int main(int argc, char *argv[])
{

    system("clear");

    int numer;

    cout << "Podaj twoj numer  w dzienniku: ";
    cin >> numer;

    int numerwiersza = numer % 3;
    int numerkolumny = numer % 2 ;

    int wiersz = 0 + 5 + numerwiersza ;
    int kolumna = 0 + 11 + numerkolumny ;

    for (int i = 0; i <= 7; i++)
    {
        gotoxy(kolumna, wiersz);
        cout << "*";
        kolumna = kolumna + 1;
    }   
    for (int i = 0; i <=7; i++)
    {
        gotoxy( kolumna, wiersz);
        cout << "*";
        wiersz = wiersz + 1;
    }
    for (int i = 0; i <= 7; i++)
    {
        gotoxy(kolumna, wiersz);
        cout << "*";
        kolumna = kolumna - 1;
    }
    for (int i = 0; i <=7; i++)
    {
        gotoxy( kolumna , wiersz );
        cout << "*";
        wiersz = wiersz - 1;
    }

    gotoxy( kolumna = 100, wiersz = 100 );



}