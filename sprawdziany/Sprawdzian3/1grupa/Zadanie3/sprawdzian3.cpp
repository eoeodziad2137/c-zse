#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int opcja, a;
    char znak;

    do
    {

        cout << "Podaj opcje: " << endl;
        cin >> opcja;
        cout << "Podaj długość boku a  w centymetrach: " << endl;
        cin >> a;

        cout << "Wczytane dane" << endl;
        cout << "A=" << a << endl;

        if (opcja == 1)
        {
            int x = a*a;
            cout << "Pole powierzchni kwadratu= " << x << " cm2" << endl;
        }

        if (opcja == 2)
        {
            int y = a + a + a + a;
            cout << "Obwod kwadratu= " << y << " cm"<<endl;
        }

        cout << "Jezeli powtorzyc program wcisnij 't' lub  w przeciwnym wypadku wcisnij inny klawisz" << endl;

        cin >> znak;

        znak = tolower(znak);
        

    } while (znak == 't');
}