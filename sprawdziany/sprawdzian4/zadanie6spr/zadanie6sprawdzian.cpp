#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int numer;

    cout << "Podaj numer w dzienniku: ";
    cin >> numer;

    int max = numer + 15;

    for (int i = numer; i <= max; i++)
    {

        int dwa = numer * numer;
        int trzy = numer * numer * numer;
        cout << "I=" << numer << "   "<< "I*I=" << dwa << "   "<< "I*I*I=" << trzy << endl;

        numer++;
    }
}