#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp1250");
    system("clear");

    int metal, deuter, krysztal, krazowniki=0;
    string koniec;

    cout << "Ile masz metalu: ";
    cin >> metal;
    cout << "Ile masz krysztal: ";
    cin >> krysztal;
    cout << "Ile masz deuteru: ";
    cin >> deuter;

    if (metal < 0 || krysztal < 0 || deuter < 0)
    {
        cout << "NIepoprawne dane" << endl;
    }
    else if (metal < 20000 || krysztal < 7000 || deuter < 2000)
    {
        cout << "Nie stac cie na nowe statki" << endl;
    }

    for (;metal >= 20000 && krysztal >= 7000 && deuter >= 2000;krazowniki++)
    {
        metal = metal - 20000;
        krysztal = krysztal - 7000;
        deuter = deuter - 2000;
    }

    if (krazowniki == 1)
    {
        cout << "Mozesz kupic" << krazowniki << " krazownik"<<endl;
    }
    else if (krazowniki >1 && krazowniki <=4)
    {
        cout << "Mozesz kupic" << krazowniki << " krazowniki"<<endl;
    }
    else if (krazowniki <4)
    {
        cout << "Mozesz kupic" << krazowniki << " krazownikow"<<endl;
    }
    
}