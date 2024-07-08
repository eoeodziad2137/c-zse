#include <iostream>

float f(float x)
{
    return x * x;
}
using namespace std;
int main(int argc, char *argv[])
{
    float x = 5;
    int z = 0; // zmienna zliczajaca ilość wierszy for(;x<=15;x=x+0.1)
    {
        z++;
        cout.precision(3);         // określenie miejsca po przecinku --> jedno
        cout << "f(" << x << ")="; // tworzymy napisy f(x)
        cout.precision(4);         // określenie miejsca po przecinku --> dwa
        cout << f(x) << "\n";      // wypisujemy wartości funkcji f(x)
        if (z % 22 == 0)           // druk co 22 wiersze i pauza
        // poprzez sprawdzenie podzielności licznika wierszy --> z przez 22 {
        {
            system("PAUSE");
        }
    }
}
