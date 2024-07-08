#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int x, y;

    cout << "Podaj pierwszą wspolrzedna punktu: ";
    cout << "Podaj drugą wspolrzedna punktu: ";

    if (x > 0 && y > 0)
    {
        cout << "Punkt nalezy do I ćwiartki" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "Punkt nalezy do II cwiartki" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "Punkt nalezy do III cwiartki" << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "Punkt nalezy do IV cwiartki " << endl;
    }
    else if (y == 0)
    {
        cout << "Punkt nalezy na osi X" << endl;
    }
    else if (x == 0)
    {
        cout << "Punkt nalezy na osi Y" << endl;
    }
    else if (x == 0 && y == 0)
    {
        cout << "To jest punkt poczatku wspolrzednych " << endl;
    }
}