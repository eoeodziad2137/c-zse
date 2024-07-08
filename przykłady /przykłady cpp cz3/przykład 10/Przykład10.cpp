#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;
int main(int argc, char *argv[])
{
    while (!kbhit())
    {
        printf("!");
    }
    printf("\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}