#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int r, m, d;

    cout << "Podaj rok: ";
    cin >> r;

    cout << "Podaj miesiac: ";
    cin >> m;

    cout << "Podaj dzien: ";
    cin >> d;

    if (r < 0 || m < 1 || m > 12 || d < 1)
    {
        cout << "Podana data istnieje" << endl;
    }
    else
    {
        cout << "Podana data nie istnieje" << endl;
    }

    bool czy_przestepny = (r % 4 == 0 && r % 100 != 0) || (r % 400 == 0);

    if (m == 2)
    {
        if (czy_przestepny == true)
        {
            return d <= 29;
        }
        else
        {
            return d <= 28;
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        return d <= 30;
    }
    else
    {
        return d <= 31;
    }
}