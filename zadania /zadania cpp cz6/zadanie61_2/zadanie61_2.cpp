// przekazywanie przez referencję
#include <cstdlib>
#include <iostream>
using namespace std;

void przekaz(int &x);

int main(int argc, char *argv[])
{
    int x = 10;
    przekaz(x);
    cout << "\n";
    cout << "na zewnątrz funkcji x=" << x << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
void przekaz(int &x)
{
    x = 2 * x;
    cout << "wewnątrz funkcji x=" << x << endl;
}