#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int a[7];
    int i;
    for (i = 0; i <= 6; i++)
    {
        cout << "podaj A[" << i << "]=";
        cin >> a[i];
    }
    cout << "w tablicy A jest"
         << "\n";
    for (i = 0; i <= 6; i++)
    // tu wprowadzamy liczby do kolejnych komórek
    {
        cout << "w komorce A[" << i << "]=" << a[i] << "\n"; // tu wypisujemy zawartość komórek
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}