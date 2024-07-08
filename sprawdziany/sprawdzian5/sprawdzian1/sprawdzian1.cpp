#include <iostream>

using namespace std;
int main(int argc, char **argv)
{

    system("clear");
    int a[3][2];
    int b[3][2];
    int liczba, iloscwieksze = 0, iloscmniejsze = 0, iloscrowna = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Podaj element macierzy A[" << i << "][" << j << "]: ";
            cin >> liczba;
            a[i][j] = liczba;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Podaj element macierzy B[" << i << "][" << j << "]: ";
            cin >> liczba;
            b[i][j] = liczba;
        }
    }

    cout << "Macierz A wyglada nastepujaco: " << endl;
    for (int i1 = 0; i1 < 3; i1++)
    {
        for (int j1 = 0; j1 < 2; j1++)
        {
            cout << a[i1][j1] << " ";
        }
        cout << "\n";
    }
    cout << "Macierz B wyglada nastepujaco: " << endl;
    for (int i1 = 0; i1 < 3; i1++)
    {
        for (int j1 = 0; j1 < 2; j1++)
        {
            cout << a[i1][j1] << " ";
        }
        cout << "\n";
    }
    cout << "Macierz C wyglada nastepujaco: " << endl;
    for (int i1 = 0; i1 < 3; i1++)
    {
        for (int j1 = 0; j1 < 2; j1++)
        {
            int wynik = (a[i1][j1] * 4) - (2 * b[i1][j1]);
            cout << wynik << " ";
            if (wynik > 2)
            {
                iloscwieksze = iloscwieksze + 1;
            }
            else if (wynik < 2)
            {
                iloscmniejsze = iloscmniejsze + 1;
            }
            else
            {
                iloscrowna = iloscrowna + 1;
            }
        }
        cout << "\n";
    }
    cout << "Liczby wieksze od dwa = " << iloscwieksze << endl;
    cout << "Liczby mniejsze od dwa = " << iloscmniejsze << endl;
    cout << "Liczby rowne od dwa = " << iloscrowna << endl;
}
