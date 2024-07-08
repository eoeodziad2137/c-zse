#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int i = 0;
    int a[5];
    int d = 1;
    int s = 0;
    int iloczyn = 0;

    for (i = 0; i <= 4; i++)
    {
        cout << "podaj A[" << i << "]=";
        cin >> a[i];

        d *= a[i];
    }

    cout<<"Iloczyn" << d << endl;

}