#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");


    int n, k, i=0, s1=0, s2=0;

    cout << "Podaj N: ";
    cin >> n;



    do
    {

        cout << "Podaj K= ";
        cin >> k;

        if (k % 2 != 0)
        {
            s1 = s1 + k;
        }
        else
        {
            s2 = s2 + k;
        }
        i++;
    } while (i!=n);

    cout << "Wartość S1= " << s1 << endl;
    cout << "Wartość S2= " << s2 << endl;
}
