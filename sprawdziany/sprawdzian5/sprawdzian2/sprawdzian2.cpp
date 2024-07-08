#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    system("clear");
    int tab[3][2];
    int liczba;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            do
            {
                cout << "Podaj element macierzy A[" << i << "][" << j << "]: ";
                cin >> liczba;
                if (liczba % 2 != 0)
                    cout << "Liczba musi byc parzysta!" << endl;
            } while (liczba % 2 != 0);
            tab[i][j] = liczba;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (tab[i][j] % 2 == 0)
            {
                cout << tab[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}