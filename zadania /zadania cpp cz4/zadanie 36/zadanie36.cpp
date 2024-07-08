#include <iostream>

using namespace std;


void gotoxy(int x, int y)
{
    std::cout << "\033[" << y << ";" << x << "H";
    std::cout.flush();
}

int main()
{
    system("clear");
    for (int i = 0; i < 22; i++)
    {

        gotoxy(i, i);
        std::cout << "*" << std::endl;
        std::cout <<" ";   
    }
    
}