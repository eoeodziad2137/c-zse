#include <iostream>

using namespace std;

bool czyprzestepny(int r)
{
    return (r % 4 == 0 && r % 100 != 0) || (r % 400 == 0);
}

bool czyok(int r, int m, int d)
{
    if (r < 0 || m < 1 || m > 12 || d < 1)
        return false;

    if (m == 2)
    {
        if (czyprzestepny(r))
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

int main()
{
    int r, m, d;

    cout << "Podaj rok: ";
    cin >> r;

    cout << "Podaj miesiąc: ";
    cin >> m;

    cout << "Podaj dzień: ";
    cin >> d;

    if (czyok(r, m, d))
    {
        cout << "Podana data istnieje." << endl;
    }
    else
    {
        cout << "Podana data nie istnieje." << endl;
    }

    return 0;
}
