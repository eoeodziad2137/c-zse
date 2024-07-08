#include <iostream>
using namespace std;

int an(int n)
{

    if (n == 0)
    {
        return 1;
    }

    if (n == 1)
    {
        return 3;
    }
    else
    {
        return an(n - 1) + n * n;
    }
}

int main()
{
    system("clear");

    int n;
    cout << "Obliczam wskazany element ciagu liczbowego" << endl;
    cout << "Podaj, element ciagu liczbowego, ktory nalezy obliczyc =";
    cin >> n;
    cout << n << "-ty wyraz ciągu to: " << an(n) << endl;
    return 0;
}
