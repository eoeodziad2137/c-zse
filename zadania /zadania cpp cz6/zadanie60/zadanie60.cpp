#include <iostream>

using namespace std;

void prostokat(void)
{
    cout << "******" << endl;
    cout << "*    *" << endl;
    cout << "*    *" << endl;
    cout << "*    *" << endl;
    cout << "******" << endl;
}
void trojkat(void)
{
    cout << "   *" << endl;
    cout << "  * *" << endl;
    cout << " *   *" << endl;
    cout << "*******" << endl;
}

int main(int argc, char *argv[])
{
    system("clear");


    prostokat();
    cout<<endl;
    trojkat();
    cout<<endl;
    prostokat();
    cout<<endl;
    trojkat();
    cout<<endl;
    prostokat();
    cout<<endl;
    trojkat();
    cout<<endl;
}