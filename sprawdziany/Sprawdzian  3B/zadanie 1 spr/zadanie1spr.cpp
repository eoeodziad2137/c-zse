#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int M = 0, i=0, liczba;

    while (i<10)
    {
        cout<<"Podaj liczbe:";
        cin >> liczba;

        if (liczba >M)
        {
            M=liczba;
            cout<<M<<endl;
            cout<<liczba<<endl;
            cout<<i<<endl;
        }
            i++;
    }

    cout<<"Wartosc M Wynosi"<<M<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}