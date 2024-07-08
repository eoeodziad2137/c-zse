#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int n = 0;
    int i = 1;
    int minus = 0;
    int plus = 0;
    int zero = 0;
    int a[i];
    /*

        {
            cout << "Pamietaj, ze ilosc podanych elementow tablicy a[] nie przekroczyla 10!" << endl;
            cout << endl;
            cout << "Podaj ilosc elementow tablicy a[]: " << endl;
            cout << "n = ";
            cin >> n;

        } while (n > 10);

    */

    // a[i] = n;

    for (i = 1; i <= 7; i++)
    {
        cout << "podaj A[" << i << "]=";
        cin >> a[i];
        if (a[i] < 0)
        {
            minus += 1;
        }
        if (a[i] >0)
        {
            plus += 1;
        }
        if (a[i] == 0)
        {
            zero += 1;
        }
    }

    cout << "Liczba wyrazow wiekszych od zera: " << plus << endl;
    cout << "Liczba wyrazow mniejszych od zera: " << minus << endl;
    cout << "Liczba wyrazow rownych zer0: " << zero << endl;
}