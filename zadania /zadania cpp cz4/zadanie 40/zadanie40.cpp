#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

bool czypierwsza(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int znajdzpierwsza(int n)
{

    if (czypierwsza(n))
    {
        return n;
    }

    int mniejsza = n - 1;
    int wieksza = n + 1;

    while (true)
    {
        if (czypierwsza(mniejsza))
        {
            return mniejsza;
        }
        if (czypierwsza(wieksza))
        {
            return wieksza;
        }

        mniejsza--;
        wieksza++;
    }
}

int main()
{

    system("clear");

    int x;

    cout << "podaj numer z dziennika: ";
    cin >> x;
    cout << endl;

    int liczba = 1000 + x * 100 + 15;

    cout << "podana liczba =1000+nr_z_dziennika*100+15 wynosi " << liczba;
    cout << endl;

    int najblizszapierwsza = znajdzpierwsza(liczba);

    cout << "najblizsza liczba = " << najblizszapierwsza<<endl;

    return 0;
}
