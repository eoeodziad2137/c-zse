#include <iostream>

using namespace std;

int obw(int x, int y)
{
    x = x * 2 + y * 2;
    return (x);
}
int pow(int x, int y)
{
    x = x * y;
    return (x);
}

int main(int argc, char *argv[])
{
    system("clear");

    int a = 4, b = 5;
    cout << "A = " << a << "cm";
    cout << "   ";
    cout << "B = " << b << "cm" << endl;

    cout << "POW(" << a << "," << b << ")= " << pow(a, b) << "cm^2" << endl;

    cout << "OBW(" << a << "," << b << ")= " << obw(a, b) << "cm" << endl;

    int x = 0, y = 0;

    cout << "Podaj A=";
    cin >> x;
    cout << "Podaj B=";
    cin >> y;

    cout << "POW(" << x << " , " << y << ")= " << pow(x, y) << "cm^2" << endl;

    cout << "OBW(" << x << " , " << y << ")= " << obw(x, y) << "cm" << endl;
}