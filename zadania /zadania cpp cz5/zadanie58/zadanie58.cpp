#include <iostream>

using namespace std;

int main()
{

    int skok, a, b;

    system("clear");

    cout << "podaj ilosc skokow narciarskich odnotowanych przez trenera: " << endl;
    cin >> skok;
    int dlugosc[skok];
    int czas[2];
    cout << "Podaj jakie wyniki skokow uzyskal zaowdnik:" << endl;
    for (int i = 1; i <= skok; i++)
    {
        cin >> dlugosc[i];
    }
    cout << "podaj dlugosc sprawdzanego okresu" << endl;
    for (int i = 0; i < 2; i++)
        cin >> czas[i];
    for (int i = 0; i < czas[1]; i++)
    {
        if (dlugosc[i] < dlugosc[i + 1])
            a++;
        else
            b++;
    }
    if (a == (skok - 1))
        cout << "tak- jedziemy na zawody";
    else
        cout << "nie jedziesz ";
    return 0;
}
