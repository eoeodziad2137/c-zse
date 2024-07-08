#include <cstdlib>
#include <iostream>

using namespace std;

void gwiazdki(void); // uprzedzam kompilator ->funkcja gwiazdki będzie póżniej

int main(int argc, char *argv[])
{
    gwiazdki();
    cout << "\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
void gwiazdki(void)
{
    cout << "****************"; /* funkcja która nie przypisuje żadnej wartości jest typu pustego czyli void - nie musi zawierać polecenia return.*/
}
