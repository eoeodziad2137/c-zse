#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

	system("clear");

	int ilosc, liczba, j = 0;
	do
	{
		cout << "Podaj ilosc elementow tablicy A: ";
		cin >> ilosc;
		if (ilosc < 1 || ilosc > 10)
			cout << endl
				 << "Tablica musi zawierac ilosc elementow od 1 do 10!" << endl;
	} while (ilosc < 1 || ilosc > 10);
	int a[ilosc], odw[ilosc];
	for (int i = 0; i < ilosc; i++)
	{
		cout << "Podaj A[" << i << "] = ";
		cin >> liczba;
		a[i] = liczba;
	}
	cout << "Odwrocona tablica A" << endl;
	for (int i = ilosc - 1; i >= 0; i--)
	{
		odw[j] = a[i];
		cout << "a[" << j << "] = " << a[i] << endl;
		j++;
	}
	return 0;
}
