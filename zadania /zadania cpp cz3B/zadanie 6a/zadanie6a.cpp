#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int i, n, k, potega = 1;

    cout << "Podaj N: " << endl;
    cin >> n;
    cout << "Podaj K: " << endl;
    cin >> k;

    for (i = 1; i <= n; i++)
    {
        potega = potega * k;
    }
    cout << "Wynik= " << n << " ^ " << k << " = " << potega << endl;
}