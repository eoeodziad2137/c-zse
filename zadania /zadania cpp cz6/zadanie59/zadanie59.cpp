#include <cstdlib>
#include <iostream>

using namespace std;

float liczba;

float dodaj(float x)
{
    if (x < 0)
    {
       return -x;
    }
    if (x >= 0)
    {
       return x;
    }
    

}

int main(int argc, char *argv[])
{
    system("clear");

    cout << "Podaj liczbę";
    cin >> liczba;
    cout << "wartosc bezwzgledna podanej liczby = " << dodaj(liczba) << endl;

    return EXIT_SUCCESS;
}