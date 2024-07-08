#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
void gotoxy(int x, int y); // Deklaracja funkcji, informujemy kompilator, że taka funkcja istnieje
using namespace std;
int main()
{
    cout << "Dzialanie funkcji gotoxy - punkt początkowy (0,0)";
    gotoxy(15, 5); /* Odwołujemy się do funkcji gotoxy z dwoma parametrami, 15 i 5
     punktu (15,5)*/
    po wykonaniu kodu znajdującego się w gotoxy kursor przemieści się do cout << " Nowy punkt (15,5) - Teraz kursor konsoli jest tutaj";
    getch(); // a to jest oczekiwanie na wcisniecie jakiegos przycisku }
    /* void można tłumaczyć jako pusty, co skutkuje tym że funkcja w przeciwnieństwie do int nie zwraca żadnej wartości. W środku deklarujemy 2 zmienne x i y do których przekazujemy 2 wartości w funkcji main za pomocą gotoxy(15,5) pierwsza liczba w odwołaniu będzie zapisana jako x a druga jako y */
    void gotoxy(int x, int y)
    {
        COORD coord; // tutaj deklarujemy strukture coord, i zmienna coord będzie mogła przechowywać współrzędne, tutaj 2 zmienne X i Y
        coord.X = x; // tutaj do zmiennej coord.X zapisujemy nasze x w naszym przypadku jest to 15
        coord.Y = y; // tak samo jak wyżej tylko do coord.Y i tutaj jest to 5
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
/* pierwszy parametr to uchwyt do urządzenia do którego się odwołuje czyli w tym przypadku jest to bufor konsoli a drugi parametr to wspolrzędne nowej pozycji kursora. */ 
}