#include <cstdlib>
#include <iostream>
using namespace std;
bool pierwsza(int liczba)
{
    int ilosc = 0;
    for (int i = 1; i <= liczba; i++)
    {
        if (liczba % i == 0) /* sprawdzamy wszystkie podzielniki w tym 1 oraz samą siebie -
             liczba*/
        {
            ilosc++;
        }
    }
    if (ilosc == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
    // dwa podzielniki 1 oraz liczba informują nas że liczba jest pierwsza
    // istnieje co najmniej jeszcze jeden podzielnik
}
int main(int argc, char *argv[])
{
    int liczba;
    cout << "podaj liczbe=";
    cin >> liczba;
    if (pierwsza(liczba) == true)
    {
        cout << "liczba jest pierwsza";
    }
    else
    {
        cout << "liczba nie jest pierwsza";
    }
    cout << "\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}