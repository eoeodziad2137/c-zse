#include <cstdlib>
#include <iostream>

using namespace std;

int potega(int a); // tutaj wypisuję instrukcję nagłówka funkcji potega() zakończoną średnikiem
int liczba;

int main(int argc, char *argv[])
{
    system("color f0");
    cout << "Podaj liczbę: ";
    cin >> liczba;
    cout << "Potęga liczby " << liczba << " = " << potega(liczba) << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
int potega(int a) // zdefiniowanie funkcji potega()
{
    return a * a;
}