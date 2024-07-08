#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int miesiac,schowek;
    float tab[8];

    cout << "Podaj miesiac twojego urodzenia: ";
    cin >> miesiac;

    for (int i = 1; i <= 8 + miesiac; i++)
    {
        cout << "Podaj " << i << " ocene = ";
        cin >> tab[i];
    }

    cout << "Tablica wprowadzonych ocen [";
    for (int i = 1; i <= 8 + miesiac; i++)
    {
        cout << tab[i] << " ";
    }
    cout << " ]" << endl;

    for (int j = 0; j <= 8+miesiac; j++)
    {
        for (int i = 0; i <= 8+miesiac - 1; i++)
        {
            if (tab[i] > tab[i + 1])
            {
                schowek = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = schowek;
            }
        }
    }

    cout << "Najlepsza ocenan" << schowek
}