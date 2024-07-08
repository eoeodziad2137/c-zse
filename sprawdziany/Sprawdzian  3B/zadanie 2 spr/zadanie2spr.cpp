#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    system("clear");
    int x;
    char stop;
    cout << "Witaj Świecie!" << endl;
    do
    {
        do
        {
            do
            {
                cout << "Wprowadź wartość" << endl;

                cin >> x;

            } while (x >= -5 && x >= 3);

            cout << "Czy chcesz zakonczyc program? Podaj znak:";

            cin >> stop;
            stop = tolower(stop);

        } while (stop != 't');
        cout << "Czy chceesz zakonczyc cdzialanie programu na 100%?" << endl;
        cin >> stop;
        stop = tolower(stop);
    } while (stop != 't');
}