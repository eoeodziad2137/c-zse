#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    short int liczba;

    printf("Wydrukuje A jako \nLiteral znakowy:\tKod ASCII:\n");
    printf("%c", 'A');
    printf("\t\t\t\t%d", 'A');
skocz: // miejsce skoku
    printf("\numiem podac kod ASCII o n wiekszy od kodu A ");
    printf("\npodaj mi liczbe n: ");
    scanf("%d", &liczba);
    if (liczba < 0) goto koniec;
    
    printf("\n%c\t\t\t\t%d\n", 'A'+liczba, 'A'+liczba);
    goto skocz;
                         // skok do etykiety skocz (w górę algorytmu - jeśli liczba>=0 to wracado etykiety skocz i ponowna pętla koniec : // miejsce skoku koniec
    koniec:                        // skok do etykiety koniec (w dół algorytmu) 
    system("PAUSE");
    return EXIT_SUCCESS;
}