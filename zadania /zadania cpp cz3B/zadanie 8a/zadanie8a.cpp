#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int i = 1, wynik = 0, liczba;



    cout << "Podaj liczbę: ";
    cin >> liczba;

    while (i < liczba)
    {
        if (liczba % i == 0)
            wynik = wynik + i;
        cout << "wynik: " <<wynik <<endl;
        i++;
        cout <<"i: "<<i <<endl;
    
    }
    cout << "Wynik = " << wynik << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}