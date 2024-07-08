#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int miejsce;

    cout << "Podaj numer miescja ktore zajal zawodnik w biegu na 10 kilmoetrow"<<endl;
    cin >> miejsce;

        
    switch (miejsce)
    {
    case 1:
        cout << "Zloty medal" << endl;
        break;

    case 2:
        cout << "srebrny medal" << endl;
        break;

    case 3:
        cout << "brazowy medal" << endl;
        break;

    case 4:
        cout << "MIejsca punktowane" << endl;
        break;

    case 5:
        cout << "miejsca punktowane" << endl;
        break;

    case 6:
        cout << "MIejsca punktowane" << endl;
        break;

    case 7:
        cout << "MIejsca nie punktowane" << endl;
        break;

    case 8:
        cout << "MIejsca nie punktowane" << endl;
        break;

    case 9:
        cout << "MIejsca nie punktowane" << endl;
        break;
    case 10:
        cout << "MIejsca nie punktowane" << endl;
        break;
    case 11:
        cout << "MIejsca nie punktowane" << endl;
        break;
    case 12:
        cout << "MIejsca nie punktowane" << endl;
        break;

    default:
        cout << "MIejsca nie istnieje" << endl;
        break;
    }
}