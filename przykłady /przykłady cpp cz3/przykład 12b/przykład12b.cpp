#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    char znak; // zmienna typu char o nazwie znak
    system("chcp 1250");
    system("cls");
    cout << "Wcisnij dowolny klawisz: " << endl; // prośba o wciśnięcie klawisza znak=getch(); // za zmienną znak podstawiamy wartość zwracaną przez getch() cout<<"Zostal wcisniety klawisz "<<znak<<endl; // wypisujemy wartość zmiennej znak
    if (znak == 'a')
    {
        cout << "Pelny dostep" << endl;
    }
    else
    {
        cout << "Brak dostepu" << endl;
    }
    getchar();
}