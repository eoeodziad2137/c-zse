#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int n;
    int a = 2;
    cout << "Podaj, numer elementu ciagu: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "a(" << i << ")=" << a << "\t";
        a += 5;
    }
}