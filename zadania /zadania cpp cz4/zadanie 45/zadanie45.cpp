#include <iostream>

using namespace std;

int main()
{
    cout << "Tabliczka mnozenia" << endl;
    cout << endl;

    cout << "  ";
    for (int i = 1; i <= 1; i++)
    {
        cout << "   ";
        cout << i;
        cout << "   ";
    }
    for (int i = 2; i <= 7; i++)
    {
        cout << i;
        cout << "       ";
    }
    

    cout << endl;

    cout << "===================================================" << endl;
    for (int i = 1; i <= 7; i++)
    {
        cout << " " << i << " ";
        cout << "|";
        for (int j = 1; j <= 7; j++)
        {
            cout << " ";
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}