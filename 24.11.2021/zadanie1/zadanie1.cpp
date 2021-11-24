#include <iostream>

using namespace std;

class Prostopadloscian{
private:
	int a, b, h;
public:
	Prostopadloscian();
	Prostopadloscian(int, int, int);
	void ustawA(int);
	void ustawB(int);
	void ustawH(int);
	int pobierzA();
	int pobierzB();
	int pobierzH();
	void obliczV();
	void obliczPPC();
	void obliczDC();
};

Prostopadloscian::Prostopadloscian() {
	a = 0;
	b = 0;
	h = 0;
}

Prostopadloscian::Prostopadloscian(int pA, int pB, int pH) {
	a = pA;
	b = pB;
	h = pH;
}

int Prostopadloscian::pobierzA() { 
	return a;
}
int Prostopadloscian::pobierzB() {
	return b;
}
int Prostopadloscian::pobierzH() {
	return h;
}

void Prostopadloscian::ustawA(int pA) { 
	a = pA;
}
void Prostopadloscian::ustawB(int pB) {
	b = pB;
}
void Prostopadloscian::ustawH(int pH) {
	h = pH;
}

void Prostopadloscian::obliczV() {
	int V = a * b * h;
	cout << "Objetosc: " << V << endl;
}

void Prostopadloscian::obliczDC() {
	int DC = (4 * a) + (4 * b) + (4 * h);
	cout << "Dlugosc calkowita: " << DC << endl;
}

void Prostopadloscian::obliczPPC() {
	int PPC = (2 * a * h) + (2 * b * h) + (2 * a * b);
	cout << "P Powierzchni calkowitej: " << PPC << endl;
}

int main(){
	int bokA, bokB, bokH;
	cin >> bokA >> bokB >> bokH;
	Prostopadloscian p1;
	p1.ustawA(bokA);
	p1.ustawB(bokB);
	p1.ustawH(bokH);
	cout<<"dlugosc: "<<p1.pobierzA()<<endl;
	cout << "szerokosc: " << p1.pobierzB() << endl;
	cout << "wysokosc: " << p1.pobierzB() << endl;
	p1.obliczV();
	p1.obliczDC();
	p1.obliczPPC();
}