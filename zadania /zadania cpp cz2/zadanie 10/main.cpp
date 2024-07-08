#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <math.h>
#include <cmath>


int main(int argc, char** argv)
{
	system("chcp 1250");
	system("cls");
	
	
	const double PI_bog = 3.1416;
	const int c_bog = 30;
	double a_bog;
	
	
	
	printf("Podaj bok a trójk¹ta: ");
	scanf("%lf",&a_bog);	

	double b_bog = sqrt(pow(c_bog, 2) - pow(a_bog, 2));
	printf("Bok Trójk¹ta = %.3lf cm\n", b_bog);
	
	double p_bog = (a_bog*b_bog)/2;
	printf("Pole Trójk¹ta = %.3lf cm^2\n", p_bog);
	
	
	double cos_alfa_bog = b_bog/c_bog;
	printf("Cosinus alfa = %.3lf\n", cos_alfa_bog);
	
	double sin_alfa_bog = a_bog/c_bog;
	printf("Sinus alfa = %.3lf\n", sin_alfa_bog);
	

	double tg_alfa_bog = a_bog / b_bog;
	printf("Tangens alfa = %.3lf\n", tg_alfa_bog);
	
	double alfa_bog = atan(tg_alfa_bog)*180/PI_bog;
	printf("K¹t alfa = %.3lf\n", alfa_bog, "stopni");

	return 0;
}
