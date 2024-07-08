#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
 {
 	system("chcp 1250");
 	system("cls");
 	
 	int x_bog;
 	
	printf("Decymalne na hexadecymalne\n ");
	printf("Podaj liczbê:\n");
	
	scanf( "%d",& x_bog );
	printf("Hexadecymalna: ");
	printf("%x\n",x_bog);
	
	printf("Hexa: ");
	printf("%o",x_bog);
 	
	return 0;
}
