#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int n = 0;
    int i = 1;
    int sum = 0;
    int a[i];

    
    {
        cout << "Pamietaj, ze ilosc podanych elementow tablicy a[] nie przekroczyla 10!" << endl;
        cout << endl;
        cout << "Podaj ilosc elementow tablicy a[]: " << endl;
        cout << "n = ";
        cin >> n;

    } while (n > 10);

    a[i] = n;

    for (i = 1; i <= n; i++)
    {
        cout << "podaj A[" << i << "]=";
        cin >> a[i];
        if(a[i] < 0)
        {
            sum += 1;
        }
    }

    cout << "Ilosc zmian znakow w programie: "<<sum << endl;
    
}