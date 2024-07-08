#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    float x, y;
    int wybor;
    char opcja;

    do
    {
        /* code */

        cout << "Umiem Obliczac pole powierzchnii prostokata oraz obwod prostokata po podaniu dlugosci bokow prostokata" << endl;
        cout << "Umiem sprawdzic podane dane" << endl;
        cout << "musisz wybrac opcje" << endl;
        cout << "****************" << endl;
        cout << "1-pole powierzchnii prosotkata" << endl;
        cout << "2-obowd prostokata" << endl;
        cout << "****************" << endl;

        cin >> wybor;

        cout << "Podaj dlugosc boku A" << endl;
        cin >> x;

        cout << "Podaj dlugosc boku B" << endl;
        cin >> y;

        cout << "Wczytande dane" << endl;
        cout << "A= " << x << endl;
        cout << "B= " << y << endl;
        cout << "Wyniki: " << endl;

        if (wybor == 1)
        {
            float pole = x * y;
            cout << "Pole powierzchni prostokata= " << pole << " cm2" << endl;
        }
        else if (wybor == 2)
        {
            float obw = x + x + y + y;
            cout << "Obwod prostokata= " << obw << " cm" << endl;
        }

        cout << "Jesli chcesz powtorzyc program wcisnij t lub T(tak)" << endl;
        cin >> opcja;

        opcja = tolower(opcja);

    } while (opcja == 't');
}