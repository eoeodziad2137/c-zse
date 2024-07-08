#include <iostream>
#include <cmath>

using namespace std;

float suma(float x, float y)
{
    x = x + y;
    return (x);
}
float roznica(float x, float y)
{
    x = x - y;
    return (x);
}
float iloczyn(float x, float y)
{
    x = x * y;
    return (x);
}
float iloraz(float x, float y)
{
    x = x / y;
    return (x);
}
float potega(float x, float y)
{
    x = pow(x, y);
    return (x);
}

int main(int argc, char *argv[])
{
    system("clear");

    int a = 0, b = 0;

    cout << "Podaj A: ";
    cin >> a;
    cout << "Podaj B: ";
    cin >> b;

    cout << endl;

    cout << "Suma: " << suma(a, b) << endl;
    cout << "Roznica: " << roznica(a, b) << endl;
    cout << "Iloczyn: " << iloczyn(a, b) << endl;
    cout << "Iloraz: " << iloraz(a, b) << endl;
    cout << "Potega " << potega(a, b) << endl;
}