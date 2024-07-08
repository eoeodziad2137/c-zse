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
    
    cout << "Podaj wagê jab³ek w gramach: " << endl;
    cin >> bog_jab;

    cout << "Podaj wagê gruszek w tonach: " << endl;
    cin >> bog_grusz;

    cout << "Podaj cenê jab³ek w kilogramach: " << endl;
    cin >> bog_cena_jab;

    cout << "Podaj cenê gruszek w kilogramach: " << endl;
    cin >> bog_cena_grusz;


    float bogwartoscjablek = (bog_jab/1000) * bog_cena_jab;

    cout << fixed << setprecision(2) <<"Wartoœæ jab³ek  =     " << bog_jab/1000 << " kg" << " * " << bog_cena_jab << "      =       " << bogwartoscjablek <<" z³‚"<< endl;
    
    float bogwartosgruszek = (bog_grusz*1000) * bog_cena_grusz;

    cout << "Wartoœæ gruszek =     " << bog_grusz*1000 <<" kg" << " * " << bog_cena_grusz << "      =       " << bogwartosgruszek << " z³‚" << endl;

    float suma = bogwartoscjablek + bogwartosgruszek;

    cout << "suma                                      =       "<<suma <<" z³‚" << endl;




}
