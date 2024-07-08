#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    long double fab[100000];
    cout << "Podaj który element ciagu chcesz wyświetlić: \n";
    cin >> n;
    fab[0] = 1;
    fab[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fab[i] = fab[i - 1] + fab[i - 2];
        // cout << n << " wyraz ciągu Fibonacciego wynosi: " << fab[n - 1] << "\n";
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " wyraz ciagu Fibbonaciego wynosi: " << fab[i - 1] << "\n";
    }
}