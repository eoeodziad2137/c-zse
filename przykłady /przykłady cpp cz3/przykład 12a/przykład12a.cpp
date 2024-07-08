#include <cstdlib> 
#include <iostream>
#include <stdio.h> 

using namespace std;

int main(int argc, char *argv[])
{
    float liczba;
    char znak;
    system("chcp 1250");
    system("cls");
    do
    {
        printf("Umiem powtarzać program\n");
        printf("\njeśli powtórzyć program wcisnij t(tak)\nw przeciwnym wypadku wciśnij klawisz n(nie)\n");
        cin >> znak;
    } while (znak == 't');
    return EXIT_SUCCESS;
}