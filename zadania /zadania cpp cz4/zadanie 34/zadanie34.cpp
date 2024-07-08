#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int a;

    cout<<"Podaj numer w dzienniku: ";
    cin >> a;

    for (int i = 180+a; i <= 200+a; i++)
    {
        cout << setprecision(4)<<"SQRT("<< i <<")="<<sqrt(i)<<endl;
    }
}