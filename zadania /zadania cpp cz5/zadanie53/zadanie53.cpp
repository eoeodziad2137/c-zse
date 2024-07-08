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
        cout << tablica[i]<<" ";
    }
    cout << endl;


    for (int i = 0; i < 7 - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < 7; ++j)
        {
            if (tablica[j] < tablica[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            int temp = tablica[i];
            tablica[i] = tablica[minIndex];
            tablica[minIndex] = temp;
        }
    }

    cout << "Wyglad posortowanej tablicy" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << tablica[i]<< " ";
    }
}