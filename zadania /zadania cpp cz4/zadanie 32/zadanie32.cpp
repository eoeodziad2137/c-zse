#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float a, sigma = 0;
    for (;;)
    {
        printf("\n Podaj liczbe do sumowania\n");
        scanf("%f", &a);

        if (a > 0)
        {
            sigma += a;
        }
        else if (a<0)
        {
            sigma = sigma - sigma;
            continue;
            
        }
        else if (a==0)
        {
            break;
        }
        
        

        printf("\n SUMA CZESCIOWA: %f", sigma);
    }
    printf("Nastapil BREAK \n");
    system("PAUSE");
}