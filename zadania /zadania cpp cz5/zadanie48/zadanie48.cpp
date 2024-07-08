#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");

    double macierz[5][2];

    double srednie_wierszy[5];

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << "Podaj element a[" << i << "][" << j << "]: ";
            cin >> macierz[i][j];
        }
    }

    for (int i = 0; i < 5; ++i)
    {
        float suma_wiersza = 0;
        for (int j = 0; j < 2; ++j)
        {
            suma_wiersza += macierz[i][j];
        }
        srednie_wierszy[i] = (suma_wiersza) / 2;
    }

    cout << endl;
    cout << "Srednie arytmetyczne wierszy:" << endl;
    cout << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "Wiersz " << i << ": " << srednie_wierszy[i] << endl;
    }

    cout << endl;
    cout << "Tablica srednich wyglada nastepujaco:    " << endl;
    cout << "[ ";
    for (int i = 0; i < 5; i++)
    {
        cout << srednie_wierszy[i] << " ";
    }
    cout << "]\n";
    cout << endl;

    for (int i = 0; i < 1; ++i)
    {
        float min = srednie_wierszy[i];
        float max = srednie_wierszy[i];
        float min_index = 0;
        float max_index = 0;
        for (int i = 0; i < 5; i++)
        {
            if (max > srednie_wierszy[i])
            {
                max = srednie_wierszy[i];
                max_index = i;
            }
            if (min < srednie_wierszy[i])
            {
                min = srednie_wierszy[i];
                min_index = i;
            }
        }

        cout << "max: A[" << min_index << "]=" << min << endl;
        cout << "min: A[" << max_index << "]=" << max << endl;
    }
}