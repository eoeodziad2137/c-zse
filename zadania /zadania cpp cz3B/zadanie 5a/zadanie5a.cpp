#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int k = 0, n, d;

    cout << "Podaj liczbe N: ";
    cin >> n;

    if (n == 0)
    {
        cout << "K: " << k << endl;
    }
    else
    {
        do
        {
            d = n % 10;
            n = n / 10;
            k = k + d;
        } while (n != 0);

        cout << "k: " << k << endl;
    }
}