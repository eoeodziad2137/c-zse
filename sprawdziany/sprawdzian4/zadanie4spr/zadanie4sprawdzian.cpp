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

    int liczbaliter;

    cout << "Podaj liczbe liter imienia: ";
    cin >> liczbaliter;

    for (int i = 0; i < liczbaliter; i++)
    {
        cout << "*";
    }
    for (int i = 0; i < liczbaliter; i++)
    {
        cout << "*" << endl;
    }
}