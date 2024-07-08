#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>


using namespace std;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    system("chcp 1250");
    system("cls");

    string samochod, drugisamochod, trzecisamochod;
    int max1, max2, max3;

    cout << "Prędkość maksymalną ogranicz do 280 km/h\n";

    cout << "Podaj markę samochodu:";
    cin >> samochod;
    cout<< endl;
    cout << "Podaj maksymalną prędkość samochochdu w km/h: ";
    cin >> max1;
    cout << endl;

    cout << "Podaj markę drugiego samochodu:" ;
    cin >> drugisamochod;
    cout << endl;
    cout << "Podaj maksymalną prędkość drugiego samochochdu w km/h: ";
    cin >> max2;
    cout << endl;

    cout << "Podaj markę trzeciego samochodu: " ;
    cin >> trzecisamochod;
    cout << endl;
    cout << "Podaj maksymalną prędkość trzeciego samochochdu w km/h: ";
    cin >> max3;
    cout << endl;
    
    double mns1 = max1 * 1000 / 3600;
    double mnm1 = max1 * 1000 / 60;

    cout << "Maksymalna prędkość " << samochod << " = "<< mns1 << " m/s lub "<< mnm1 <<" m/min";
    cout << endl;

    double mns2 = max2 * 1000 / 3600;
    double mnm2 = max2 * 1000 / 60;

    cout << "Maksymalna prędkość " << drugisamochod << " = "<<mns2 << " m/s lub " << mnm2 << " m/min";
    cout << endl;

    double mns3 = max3 * 1000 / 3600;
    double mnm3 = max3 * 1000 / 60;

    cout << "Maksymalna prędkość " << trzecisamochod << " = "<<mns3<<" m/s lub " << mnm3 << " m/min";
    cout << endl;
    
    cout << "*" << endl;
    cout << "*";
    gotoxy( mns1,17); cout << samochod << endl;


    cout << "*" << endl;
    cout << "*";
    gotoxy(mns2, 19); cout << drugisamochod << endl;

    cout << "*" << endl;
    cout << "*";
    gotoxy(mns3, 21); cout << trzecisamochod << endl;

    cout << "*" << endl;
    cout << "***************************************************************************" << endl;
    cout << "    5    10   15   20   25   30   35   40   45   50   55   60   65   70   75" << endl;
}
