#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");

    float bog_jab, bog_grusz, bog_cena_jab, bog_cena_grusz;
    
    cout << "Podaj wag� jab�ek w gramach: " << endl;
    cin >> bog_jab;

    cout << "Podaj wag� gruszek w tonach: " << endl;
    cin >> bog_grusz;

    cout << "Podaj cen� jab�ek w kilogramach: " << endl;
    cin >> bog_cena_jab;

    cout << "Podaj cen� gruszek w kilogramach: " << endl;
    cin >> bog_cena_grusz;


    float bogwartoscjablek = (bog_jab/1000) * bog_cena_jab;

    cout << fixed << setprecision(2) <<"Warto�� jab�ek  =     " << bog_jab/1000 << " kg" << " * " << bog_cena_jab << "      =       " << bogwartoscjablek <<" z��"<< endl;
    
    float bogwartosgruszek = (bog_grusz*1000) * bog_cena_grusz;

    cout << "Warto�� gruszek =     " << bog_grusz*1000 <<" kg" << " * " << bog_cena_grusz << "      =       " << bogwartosgruszek << " z��" << endl;

    float suma = bogwartoscjablek + bogwartosgruszek;

    cout << "suma                                      =       "<<suma <<" z��" << endl;




}
