#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    char a, b;
    int c;

    cout << "Podaj pierwszą literę kodu: \n";
    cin >> a;
    cout << "Podaj drugą literę kodu: \n";
    cin >> b;
    cout << "Podaj trzecia literę kodu: \n";
    cin >> c;

    cout<<"Podany kod to "<<a<<b<<c<<endl;

    a = tolower(a);
    b = tolower(b);

    if (a == 'b' && b == 'o' && c == 54)
    {
        cout<<"Jest OK znasz hasło"<<endl;
    }
    else
    {
        cout<<"Przykro nie znasz hasła"<<endl;
    }
    
    return 0;
}