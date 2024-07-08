#include <iostream>

using namespace std;

int blizniacze(int x)
{
    int y = 1;
    for (int i = 1; y < x; i++)
    {
        cout<<y<<endl;
        y = y + 2;
    }
    return y;
}

int main(int argc, char *argv[])
{
    system("clear");

    int max = 0;

    cout << "Podaj gorna granice przedzialu = ";
    cin >> max;

    cout << blizniacze(max);
}