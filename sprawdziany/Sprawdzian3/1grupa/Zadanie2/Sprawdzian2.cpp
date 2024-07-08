#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

        system("chcp 1250");
        system("cls");

        int x;
    do
    {


        cout << "Umiem zrobic to zadanie!" << endl;
        cout << "Jeśli chcesz powtorzyc program to podaj liczbe z przedzialu <-7,1) " << endl;
        cout << "Podaj liczbe x:";
        cin >> x;


    } while (x>=- 7 && x<1);
}