#include <iostream>

using namespace std;

void gotoxy(int x, int y)
{
    cout << "\033[" << y << ";" << x << "H";
    cout.flush();
}

int main(int argc, char *argv[])
{

    int j = -1;
    system("clear");

    for (int i = 20; i >= 1; i--)
    {

        gotoxy(i, j);
        cout << "Bogdan" << endl;
        cout << " ";

        j--;
    }
}