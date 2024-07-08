#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

	system("clear");
	int ilosc, schowek;
	cout << "Ile elementowa ma byc tablica: ";
	cin >> ilosc;
	int tablica[ilosc];
	for (int i = 0; i < ilosc; i++)
	{
		cout << "Podaj " << (i + 1) << " element tablicy: ";
		cin >> tablica[i];
	}
	cout << "Tablica przed sortowaniem";
	for (int i = 0; i < ilosc; i++)
		cout << "[" << tablica[i] << "]";
	cout << endl;
	
	for (int j = 0; j < ilosc; j++)
	{
		for (int i = 0; i < ilosc - 1; i++)
		{
			if (tablica[i] > tablica[i + 1])
			{
				schowek = tablica[i];
				tablica[i] = tablica[i + 1];
				tablica[i + 1] = schowek;
			}
		}
	}
	cout << "Tablica po sortowaniu";
	for (int i = 0; i < ilosc; i++)
		cout << "[" << tablica[i] << "]";
	return 0;
}
