#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
    int n;
    long double fab[100000]; // wczytywane są długie liczby - typ zmien. o wysok. pojemnosci
    cout << "Podaj który element ciagu chcesz wyświetlić: \n";
    cin >> n;
    fab[0] = 1;
    fab[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fab[i] = fab[i - 1] + fab[i - 2]; // wyraz kolejny jest sumą dwóch poprzednich liczb } // wczytywanie liczb Fabonacciego do tablicy
        cout << n << " wyraz ciągu Fibonacciego wynosi: " << fab[n - 1] << "\n";
        // wywołanie konkretnego elementu tablicy Fibonacciego
        system("PAUSE");
        return EXIT_SUCCESS;
    }
}