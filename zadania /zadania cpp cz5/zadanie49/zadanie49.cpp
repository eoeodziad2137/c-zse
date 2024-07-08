#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");

    int macierz[3][3];
    int suma = 0;
    int value = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "podaj element macierzy a"
                 << "[" << i << "][" << j << "]=";
            cin >> macierz[i][j];
        }
    }
    cout << "\n";
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << macierz[i][j] << "\t";
        }
        cout << "\n";
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma += macierz[i][j];
        }
    }

    cout << "Suma wszystkich elementow tablicy wynosi a= " << suma << endl;
    cout << "Podaj liczbe przez ktora chcesz pomnozyc macierz: ";
    cin >> value;
    int mnozenie = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             macierz[i][j] *= value;
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << macierz[i][j] << "\t";
        }
        cout << "\n";
    }
}