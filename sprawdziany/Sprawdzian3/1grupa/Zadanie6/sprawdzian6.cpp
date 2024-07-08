#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int pokoj;

    for (;;)
    {

        cout << "Podaj numer pokoju" << endl;
        cin >> pokoj;

        switch (pokoj)
        {
        case 101:
            cout << "Sala Wykładowa" << endl;
            break;

        case 102:
            cout << "Sala Wykładowa" << endl;
            break;

        case 103:
            cout << "Sala Wykładowa" << endl;
            break;

        case 104:
            cout << "Sala Wykładowa" << endl;
            break;

        case 105:
            cout << "Sala Wykładowa" << endl;
            break;

        case 106:
            cout << "Toaleta" << endl;
            break;

        case 107:
            cout << "Toaleta" << endl;
            break;

        case 108:
            cout << "Sekretariat" << endl;
            break;

        case 109:
            cout << "Portiernia" << endl;
            break;

        default:
            cout << "Taki pokoj nie istnieje" << endl;
            break;
        }

        char t;

        cout << "Jezeli chcesz zakonczyc program wcisnij t/T" << endl;

        cin >> t;

        t = tolower(t);

        if (t == 't')
        {
            exit(0);
        }
    }
}