#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("cls");
    int waga;
    do
    {
        printf("Podaj Twoja wagę w [kg]= ");
        scanf("%d", &waga);
        if (waga <= 0)
        {
            printf("waga musi być większa od zera\n");
        }
    } while (!(waga > 0));
    printf("waga wczytana poprawnie\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}