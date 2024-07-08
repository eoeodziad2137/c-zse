#include <iostream>

using namespace std;

int func(int a)
{
    
    if (a == 1)
    {
        return 2;
    }
    else
    {
        return func(a - 1) + 5;
    }
}

int main(int argc, char *argv[])
{

    system("clear");
    int n = 0;

    cout << "Obliczam wskazany element ciagu liczbowego" << endl;
    cout << "Podaj, element ciagu liczbowego, ktory nalezy obliczyc=";
    cin >> n;
    cout << "Ciag(" << n << ")" << func(n)<<endl;
}