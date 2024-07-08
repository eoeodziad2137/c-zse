#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    system("clear");

    int tablica[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "Podaj " << (i + 1) << " element tablicy: ";
        cin >> tablica[i];
    }

    cout << "Wyglad wprowadzonej tablicy" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < 7; ++i)
    {
        int key = tablica[i];
        int j = i - 1;
        while (j >= 0 && tablica[j] > key)
        {
            tablica[j + 1] = tablica[j];
            j = j - 1;
        }
        tablica[j + 1] = key;
    }
    cout << "Wyglad posortowanej tablicy tablicy" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << tablica[i] << " ";
    }
}