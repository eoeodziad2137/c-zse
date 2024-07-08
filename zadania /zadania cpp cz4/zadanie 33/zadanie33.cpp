#include <iostream>

using namespace std;

int main()
{
    int d = 1;

    for (int i = 33; i <= 255; i++)
    {
        cout << "kod znaku" << i << "=" <<char(i)<<"";

        if (i % 3 == 2)
        {
            cout << "\n";
            d++;
            if (d % 20 == 0)
            {
                system( "read -n 1 -s -p \"Press any key to continue...\"" );
                system("clear");
            }
            
        }
        else
        {
            cout << "\t";
        }
    }
    
    return 0;
}