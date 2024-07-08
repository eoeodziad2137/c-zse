#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("clear");

    int miesiac;
    int ar[3];

    cout << "Podaj miesiac twojego urodzenia = ";
    cin >> miesiac;

    cout << endl;

    for (int i = 0; i < 3 + miesiac; i++)
    {
        cout <<"Macierz_AR["<<i<<"]="<<i + 4<<endl;
        
    }
    

}
