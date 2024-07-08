#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int d;

    cout << "Podj dlugosc lini D= ";
    cin >> d;

    cout << endl;
    cout << endl;

    for (int i = 1; i <= d; i++)
    {
        cout << "**" << endl;
    }
}