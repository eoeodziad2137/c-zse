#include <iostream>

using namespace std;

int maksium(int n[], int x)
{
    int najwieksza = n[0];
    for (int i = 1; i < x; ++i)
    {
        if (n[i] > najwieksza)
        {
            najwieksza = n[i];
        }
    }
    return najwieksza;
}

int minimum(int n[], int x)
{
    int najmniejsza = n[0];
    for (int i = 1; i < x; ++i)
    {
        if (n[i] < najmniejsza)
        {
            najmniejsza = n[i];
        }
    }
    return najmniejsza;
}

int main(int argc, char *argv[])
{
    system("clear");

    int n;
    int tab[n];

    cout << "Podaj ilosc elementow ciagu: " << endl;
    cout << "n = ";
    cin >> n;

    cout << "Wczytaj elementy ciagu: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i << "] = ";
        cin >> tab[i];
    }

    cout << "Najwieksza: " << maksium(tab, n);
    cout<<endl;
    cout<<"Najmniejsza: "<<minimum(tab, n);
}