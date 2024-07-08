#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int pin = 1753; 
    int podany_pin;                                                      // pin jest liczbą calkowitą, jej wartość to 1753 int podany_pin; //podany pin jest również liczbą całkowitą ;-)
    cout << "Prosze podac czterocyfrowy kod PIN: " << endl; // prosimy o podanie kodu PIN
    cin >> podany_pin;                                      // wczytujemy kod z klawiatury
    cout << "Podany kod PIN to: " << podany_pin << endl;    // dla wprawy, potwierdzamy
    if (podany_pin == pin)
    {                                            // sprawdzamy warunek: jeżeli podany_pin RÓWNA SIĘ pin { //to
        cout << "Kod PIN jest poprawny" << endl; // tu mamy blok instrukcji, gdy pin jest poprawny cout<<"Oto Twoje dane:"<<endl<<endl;
        cout << "Jan Kowalski" << endl;
        cout << "Kominki 56" << endl;
        cout << "34-683 Kielce" << endl
             << endl;
        cout << "jankowalski@domena.pl" << endl
             << endl;
        cout << "Dowolny klawisz, aby zakonczyc" << endl;
    }
    else // jeżeli natomiast kod PIN jest błędny to wtedy:
    {
        cout
            << "kod PIN nie jest poprawny" << endl;
        cout << "Dowolny klawisz, aby zakonczyc" << endl;
    }
    getchar();
}