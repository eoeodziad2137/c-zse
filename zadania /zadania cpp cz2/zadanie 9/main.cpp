#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
 {
	int bog, bogkwadrat, bogszescian;
	
 	
	system("chcp 1250");
	system("cls");
	
	
	printf("Podaj liczbê naturaln¹: ");
	scanf("%d",&bog);
	
	printf("Wczytana liczba x= %d\n", bog);
	
	bogkwadrat = (bog*bog);
	bogszescian = (bog*bog*bog);
	
	printf("Kwadrat liczby x= %d ",bog);
	printf("wynosi %d\n", bogkwadrat);
	
	printf("Szescian liczby:= x= %d ", bog );
	printf("wynosi %d", bogszescian);
	
 	
 	
	return 0;
}
