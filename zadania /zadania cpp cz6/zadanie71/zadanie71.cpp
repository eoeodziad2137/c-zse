#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int n;

    do
    {

        cout << "Wczytaj n: ";
        cin >> n;

    } while (n < 1);

    int i = 1;
    int pocz = 2;
    do
    {

        int an = pocz + (i * i);
        pocz = an;
        i++;
    } while (i <= n);

    cout << pocz << endl;
}