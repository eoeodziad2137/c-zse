#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");


    int a[7][7];
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i == j)
            {
                a[i][j] = 1;
            }
            else
                a[i][j] = 0;
        }
        for (int i1 = 0; i1 < 7; i1++)
        {
            for (int j1 = 0; j1 < 7; j1++)
            {
                cout << a[i1][j1] << " ";
            }
            cout << "\n"; 
        system("PAUSE");
        return EXIT_SUCCESS;
    }
}
