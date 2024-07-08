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

    int x, y, d;

    cout << "Podaj zmienna (Kolumne ekranu ) x= ";
    cin >> x;
    cout << "Podaj zmienna (wiersz ekranu ekranu ) y= ";
    cin >> y;
    cout << "Podaj zmienna (dlugosc lini ) d= ";
    cin >> d;

    gotoxy(x, y);
    cout << "o";

    for (int v=0; v < d; v++)
    {
        gotoxy((x - d) + v, y);
        cout << "-";
    }
    for(int h=0; h<d ; h++)
    {
        gotoxy((x + d) - h, y);
        cout << "-";
    }


    gotoxy(x = 100, y = 100);
}