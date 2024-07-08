#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double suma = 0.0;

    for (int i = 1; i <= 1000000; ++i)
    {
        suma += 1.0 / i;
        cout << suma << endl;
    }
}