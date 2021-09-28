#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int pivot = rand() % 100 + 1;
	int a;
	vector <int> wektor;

	cout << pivot << endl;
	cout << "Zgadnij liczbe o ktorej mysle (od 1 do 100): ";
	cin>>a;
	while (a != pivot) {
		if (a < pivot) {
			wektor.insert(wektor.begin(), a);
			for (int i = 0; i < wektor.size(); i++) {
				cout << wektor[i] << " ";
			}
		}
		else if (a > pivot) {
			wektor.push_back(a);
			for (int i = 0; i < wektor.size(); i++) {
				cout << wektor[i] << " ";
			}
		}
		cout << endl << "Podaj znowu: ";
		cin >> a;
	}
	if (a == pivot) {
		cout << "Brawo, zgadles!";
	}
}