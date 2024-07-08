#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int a[7];

    int i = 0;
    int d = 0;
    int s = 0;

    for (i = 0; i <= 6; i++)
    {
        cout << "podaj A[" << i << "]=";
        cin >> a[i];

        d += a[i];

        s = s + a[i];

    }

    s = s / 7;

    cout << "Suma liczb tablicy: " << d << endl;

    cout << endl;

    cout << "srednia liczb tablicy: " << s << endl;
}