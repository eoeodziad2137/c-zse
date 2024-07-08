#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    system("clear");
    
    int dol, gora;

    do
    {
        cout << "Podaj dolna wartosc dol=";
        cin >> dol;
        cout << "Podaj gorna wartosc gora=";
        cin >> gora;

    } while (dol <= 1);

    cout << "Znaleznione liczby blizniacze to: " << endl;

    for (int i = 1; gora - 1 > i; i++)
    {
        cout << i + dol << endl;
        i++;
    }
}