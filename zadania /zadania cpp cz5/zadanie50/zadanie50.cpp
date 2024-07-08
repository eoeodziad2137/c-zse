#include <iostream>

using namespace std;

int main()
{
    system("clear");

    const int ROWS_3x3 = 3;
    const int COLS_3x3 = 3;

    int tablica_3x3[ROWS_3x3][COLS_3x3];

    for (int i = 0; i < ROWS_3x3; ++i)
    {
        for (int j = 0; j < COLS_3x3; ++j)
        {
            cout << "Podaj element a[" << i << "][" << j << "]: ";
            cin >> tablica_3x3[i][j];
        }
    }

    const int ROWS_5x5 = 3;
    const int COLS_5x5 = 5;
    int tablica_5x5[ROWS_5x5][COLS_5x5];

    for (int i = 0; i < ROWS_3x3; ++i)
    {
        for (int j = 0; j < COLS_3x3; ++j)
        {
            tablica_5x5[i][j] = tablica_3x3[i][j];
        }
    }

    tablica_5x5[0][3] = tablica_5x5[0][0];
    tablica_5x5[0][4] = tablica_5x5[0][1];
    tablica_5x5[1][3] = tablica_5x5[1][0];
    tablica_5x5[1][4] = tablica_5x5[1][1];
    tablica_5x5[2][3] = tablica_5x5[2][0];
    tablica_5x5[2][4] = tablica_5x5[2][1];

    cout << endl;
    cout << "Pełna macierz ze skopiowanymi elemantami wyglada nasep" << endl;
    for (int i = 0; i < ROWS_5x5; ++i)
    {
        for (int j = 0; j < COLS_5x5; ++j)
        {
            cout << tablica_5x5[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int wyznacznik = 0;
    int wyznacznik2 = 0;
    int wyroznik = 0;

    wyznacznik = (tablica_5x5[0][0] * tablica_5x5[1][1] * tablica_5x5[2][2]) + (tablica_5x5[0][1] * tablica_5x5[1][2] * tablica_5x5[2][0]) + (tablica_5x5[0][2] * tablica_5x5[1][0] * tablica_5x5[2][1]);
    wyznacznik2 = (tablica_5x5[0][2] * tablica_5x5[1][1] * tablica_5x5[2][0]) + (tablica_5x5[0][3] * tablica_5x5[1][2] * tablica_5x5[2][1]) + (tablica_5x5[0][4] * tablica_5x5[1][3] * tablica_5x5[2][2]);
    wyroznik = wyznacznik - wyznacznik2;
    
    cout << "Wyznacznik macierzy: " << wyznacznik << endl;

    return 0;
}
