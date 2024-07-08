#include <iostream>

using namespace std;


bool spr_pierwsza(int x)
{
	if (x <= 1)
	{
		return false;
	}
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
}

int main(int argc, char* argv[])
{
	int dw, gw, suma = 0;

	system("chcp 1250");
	system("cls");

	cout << "Podaj dolna wartosc: ";
	cin >> dw;
	cout << "Podaj gorna wartosc: ";
	cin >> gw;

	for (int i = dw; i <= gw; i++)
	{
		if (spr_pierwsza(i))
		{
			cout << "\nLiczba " << i << " to jest liczba pierwsza";
			suma = suma + i;
		}
	}

	cout << "\nSuma= " << suma;

}