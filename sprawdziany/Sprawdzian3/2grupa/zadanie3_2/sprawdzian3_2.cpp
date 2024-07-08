#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int x;

    do
    {
        cout << "Informatyka jest piekna" << endl;
        cout << "Jeśli chcesz skonczyc program to podaj liczbe z przedzialu (-1;9>" << endl; // przedzial jest w chuj randomowy bo nei widac tego na tym co Igor wyslal
        cout << "Podaj liczbe x: ";
        cin >> x;

    } while (x > -1 && x <= 9);
}