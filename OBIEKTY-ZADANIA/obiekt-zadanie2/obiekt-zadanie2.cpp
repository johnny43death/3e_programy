#include <iostream>

using namespace std;

class Prostopadloscian {
public:
	int a, b, h;
	Prostopadloscian();
	Prostopadloscian(int, int, int);
	void obliczDlugosc();
	void obliczPPB();
	void obliczObjetosc();
};

void Prostopadloscian::obliczDlugosc() {
	int dlugosc = (4 * a) + (4 * b) + (4 * h);
	cout << "Dlugosc wszystkich krawedzi: " << dlugosc << endl;
}

void Prostopadloscian::obliczPPB() {
	int PPB = (2 * a * h) + (2 * b * h);
	cout << "Pole powierzchni bocznej: " << PPB << endl;
}

void Prostopadloscian::obliczObjetosc() {
	int objetosc = a * b * h;
	cout << "Objetosc: " << objetosc << endl;
}

Prostopadloscian::Prostopadloscian() {
	a = 4;
	b = 6;
	h = 5;
}

Prostopadloscian::Prostopadloscian(int pA, int pB, int pH) {
	a = pA;
	b = pB;
	h = pH;
}

int main() {
	int a, b, h;

	cout << "Podaj dlugosc: ";
	cin >> a;
	cout << "Podaj szerokosc: ";
	cin >> b;
	cout << "Podaj wysokosc: ";
	cin >> h;

	Prostopadloscian p1;
	p1.obliczDlugosc();
	p1.obliczPPB();
	p1.obliczObjetosc();

	Prostopadloscian p2(a, b, h);
	p2.obliczDlugosc();
	p2.obliczPPB();
	p2.obliczObjetosc();
}