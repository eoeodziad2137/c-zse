#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	system("title string - autor: Stanis�aw Bogdan");
    system("chcp 1250");
    system("color 80");
    system("cls");

    string imie, nazwisko;


    cout << "Podaj swoje imie"<<endl;
    cin >> imie;

    cout << "Podaj swoje Nazwisko"<<endl;
    cin >> nazwisko;

    cout << "Nazywasz si� " << imie << " " << nazwisko << endl;
    cout<<endl;
    
    cout<<"Twoje imie ma "<<imie.length()<<" liter, a nazwisko "<< nazwisko.length()<<endl;
    cout<<endl;
    
    cout<<"��cznie twoje dane maj� "<<imie.length()+nazwisko.length()<<" liter"<<endl;
    cout<<endl;
    
    char pim = imie[0];
    char pin = nazwisko[0];
    
    cout<<"Twoje inicja�y to "<<pim << ""<< pin;
    cout<<endl;
    
    
    
}


