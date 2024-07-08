#include <cstdlib>
#include <iostream>
// instrukcja potrzebna do poprawnego dzialania getch() using namespace std;

using namespace std;

int main(int argc, char *argv[])
{
    system("cls");
    system("chcp 1250");

    int liczba1, liczba2, wynik;
    cout << "Podaj pierwsza liczbę: ";
    cin >> liczba1;
    cout << "\nPodaj druga liczbę: ";
    cin >> liczba2;
    wynik = liczba1 % liczba2;
    cout << "\nReszta z dzielenia liczby " << liczba1 << " przez " << liczba2 << " wynosi " << wynik;
    if (wynik == 0)
    // sprawdzenie warunku
    {
        cout << "\npierwsza liczba jest podzielna przez druga" << endl;
    }    // instrukcja nr 1 - BŁĄD !!!
    else // jeżeli nie
    {
        cout << "\n\npierwsza liczba nie jest podzielna przez druga" << endl;
    } // instrukcja nr 2 - BŁĄD !!!
    cout << endl;
    getchar();
}