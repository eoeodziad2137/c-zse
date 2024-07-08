#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    system("clear");
    int tab[2][4];


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Podaj element tablicy AR["<<i<<"]["<<j<<"["<<endl;
            cin >> tab[i][j];
        }
        
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << tab[i][j]<<" ";
        }
        
    }
    cout << endl;
    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << tab[i][j]<<" ";
        }
        
    }
    


    
}