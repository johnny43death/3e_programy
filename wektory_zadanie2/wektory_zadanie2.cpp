#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));

	vector <int> wektor;
	int wynik = 0, licznik = 1;
	int** tab = new int* [5];
	for (int i = 0; i < 5; i++) {
		tab[i] = new int[5];
		for (int j = 0; j < 5; j++) {
			tab[i][j] = rand() % 25 + 1;
			cout << tab[i][j] << " | ";
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			wynik = abs(tab[i][j] - licznik);
			wektor.push_back(wynik);
			licznik++;
		}
	}
	cout << endl << endl;
	for (int i = 0; i < wektor.size(); i++) {
		cout << wektor[i] << " ";
	}

	int suma = 0;
	for (int i = 0; i < wektor.size(); i++) {
		suma += wektor[i];
	}

	cout << endl;
	cout << suma;
	
	for (int i = 0; i < 5; i++) {
		delete[] tab[i];
	}

	delete[] tab;
}