#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int a, b, c, d;

    cout << "Wage podawaj w kilogramach" << endl;

    cout << "Podaj wage pierwszej osoby: ";
    cin >> a;

    cout << "Podaj wage drugiej osoby: ";
    cin >> b;

    cout << "Podaj wage trzeciej osoby: ";
    cin >> c;

    cout << "Podaj wage czwartej osoby: ";
    cin >> d;

    int max = a;
    int scndmax = a;
    int avg = a;
    int min = a;

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }

    if (b<min)
    {
        min = b;
    }
    if (c<min)
    {
        min = c;   
    }
    if (d<min)
    {
        min = d;
    }

      if (a < max && a > min)
    {
        avg = a;
    }
    if (b < max && b > min)
    {
        avg = b;
    }
    if (c < max && c > min)
    {
        avg = c;
    }
    if (d < max && d > min)
    {
        avg = d;
    }

    if (a < max && a > avg)
    {
        scndmax = a;
    }
    if (b < max && b > avg)
    {
        scndmax = b;
    }
    if (c < max && c > avg)
    {
        scndmax = c;
    }
    if (d < max && d > avg)
    {
        scndmax = d;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    
    cout <<"Największa: "<<max<<" kg"<<endl;
    cout <<"Druga największa: "<<scndmax<<" kg"<<endl;
    cout <<"Srednia: "<<avg<<" kg"<<endl;
    cout <<"Najmniejsza: "<<min<<" kg"<<endl;
}