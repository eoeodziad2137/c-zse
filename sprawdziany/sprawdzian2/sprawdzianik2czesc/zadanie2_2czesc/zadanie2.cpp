#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{

    system("chcp 1250");
    system("clear");

    float a,b,c,d;

    cout<<"Podaj licznik pierszego ułamka A: ";
    cin >> a;
    cout<<"Podaj mianownik pierszego ułamka B: ";
    cin>>b; 
    cout<<"Podaj licznik pierszego ułamka D: "; 
    cin>>c;
    cout<<"Podaj mianownik pierszego ułamka D: ";
    cin>>d;

    cout<<endl;



    cout<<"Wczytane sa liczby: A "<<a<<" B "<<b<<" C "<<c<<" D "<<d<<endl; 

    float x = (a/b);
    float y = (c/d);
    float xy = x+y;

    cout<<a<<" + "<<c<<endl;
    cout<<"- + -"<<" = "<<xy<<endl;
    cout<<b<<" + "<<d<<endl;

}