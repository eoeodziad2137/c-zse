#include <cstdlib>
#include <iostream>

using namespace std;

void gotoxy(int x, int y)
{
    cout << "\033[" << y << ";" << x << "H";
    cout.flush();
}
int main(int argc, char *argv[])
{
    for (int i = 0; i <= 22; i++)
    {
        gotoxy(40, i);
        cout << "*"
             << "\n";
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}