#include <cstdlib>
#include <iostream>
using namespace std;
float liczba;
float dodaj(float x) // tutaj umieszczamy funkcję dodaj
{
    x += 5; // zmienna x jest zmienną lokalną wyłącznie na potrzeby funkcji dodaj
    return x;
}
int main(int argc, char *argv[])
{
    cout << "Podaj liczbę do której dodamy wartość 5: ";
    cin >> liczba;                                                              // zmienna liczba jest zmienną globalną
    cout << "wynik dodawania " << liczba << " + 5 = " << dodaj(liczba) << endl; // tutaj wywołuję funkcję dodaj z parametrem podanej liczby
    system("PAUSE");
    return EXIT_SUCCESS;
}