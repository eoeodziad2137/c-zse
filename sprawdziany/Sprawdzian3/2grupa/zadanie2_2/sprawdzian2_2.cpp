#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int a, b, c;

    cout << "Podaj pierwszy bok trojkata: ";
    cin >> a;

    cout << "Podaj drugi bok trojkata: ";
    cin >> b;

    cout << "Podaj trzeci bok trojkata: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            cout << "Trójkąt jest równoboczny." << endl;
        }
        else if (a == b || a == c || b == c)
        {
            cout << "Trójkąt jest równoramienny." << endl;
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            cout << "Trójkąt jest prostokątny." << endl;
        }
        else
        {
            cout << "Trójkąt jest różnoboczny." << endl;
        }
    }
    else
    {
        cout << "Podane długości nie tworzą trójkąta." << endl;
    }
}