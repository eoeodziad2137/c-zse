#include <iostream>

using namespace std;

int miesiac_bog;

int main(int argc, char *argv[])
{

    system("clear");

    cout << "Podaj miesiac: ";
    cin >> miesiac_bog;

    for (int i = miesiac_bog; i <= miesiac_bog + 30; i = i + 2)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        else
        {
            i--;
        }
    }
}