#include <iostream>

using namespace std;

int fibR(int n)
{
    if (n < 3)
        return 1;
    else
        return fibR(n - 1) + fibR(n - 2);
}

int main(int argc, char *argv[])
{

    int n;

    system("clear");

    cout << "Obliczam wskazany wyraz ciagu Fibonacciego" << endl;

    cout << "Podaj, ktory element ciagu FIbbonaciego, ktory nalezy obliczyc ";
    cin >> n;

    cout <<fibR(n);
}

