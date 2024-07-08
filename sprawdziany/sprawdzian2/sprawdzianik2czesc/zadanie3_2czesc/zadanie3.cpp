#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b,h,p, obw;

    cout<<"Podaj ramie A w centymetrach: ";
    cin >> a;
    cout<<"Podaj ramie B w centymetrach: ";
    cin >> b;

    cout<<"Wczytane dane: ";
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;

    cout<<endl;

    int bb = b/2;



    h = sqrt(a*a - bb*bb);
    p = bb * h;
    obw = 2*a+b;


    cout<<"Wyniki: "<<endl;
    cout<<"H="<<h<<endl;
    cout<<"Pole trojkata= "<<p<<"cm^2"<<endl;
    cout<<"obwod trojkata= "<<obw<<"cm"<<endl;



    
}