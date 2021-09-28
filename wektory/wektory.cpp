#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	vector <int> wektor = { 0,20,30,40,50 };
	
	wektor[0] = 10; //wstawianie wartości w miejscu
	wektor.insert(wektor.begin(), 0); //dodawanie wartości na początku
	wektor.push_back(60); //dodawanie wartości na końcu

	for (int i = 0; i < wektor.size(); i++) {
		cout << wektor[i] << " ";
	}

	//przy każdym przejściu pętli, obecna wartość wektora przechodzi do zmiennej element
	//działa jak foreach
	for (int element : wektor) {
		cout << element << " ";
	}
}