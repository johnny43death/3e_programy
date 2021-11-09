#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Pokoj {
private:
	string kolor;
	double dlugosc;
	double szerokosc;
	double pole = 0;
public:
	Pokoj();
	Pokoj(double, double);
	Pokoj(const Pokoj&);
	void pobierz(string&, double&, double&, double&);
	void ustaw(double);
	double obliczPole();
	void wyswietlDane();
};

Pokoj::Pokoj() {
	kolor = "czerwony";
}

Pokoj::Pokoj(double pDlugosc, double pSzerokosc) {
	dlugosc = pDlugosc;
	szerokosc = pSzerokosc;
}

Pokoj::Pokoj(const Pokoj& wzorzec) { 
	dlugosc = wzorzec.dlugosc;
	szerokosc = wzorzec.szerokosc;
	kolor = wzorzec.kolor;
}

void Pokoj::pobierz(string& pKolor, double& pDlugosc, double& pSzerokosc, double& pPole) {
	pKolor = kolor;
	pDlugosc = dlugosc;
	pSzerokosc = szerokosc;
	pPole = pole;
}

void Pokoj::ustaw(double pPole) {
	pole = pPole;
}

double Pokoj::obliczPole() {
	double pole = dlugosc * szerokosc;
	return pole;
}

void Pokoj::wyswietlDane() {
	cout << "\nPokoj: " << dlugosc << " " << szerokosc << " " << pole << " " << kolor;
}

int main() {
	srand(time(NULL));

	Pokoj p1(rand() % 9, rand() % 9);
	p1.obliczPole();
	Pokoj p2(rand() % 9, rand() % 9);
	p2.obliczPole();
	Pokoj p3(rand() % 9, rand() % 9);
	p3.obliczPole();
	Pokoj p4(rand() % 9, rand() % 9);
	p4.obliczPole();
	Pokoj p5(rand() % 9, rand() % 9);
	p5.obliczPole();
	Pokoj p6(rand() % 9, rand() % 9);
	p6.obliczPole();
	Pokoj p7(rand() % 9, rand() % 9);
	p7.obliczPole();
	Pokoj p8(rand() % 9, rand() % 9);
	p8.obliczPole();
	Pokoj p9(rand() % 9, rand() % 9);
	p9.obliczPole();
	Pokoj p10(rand() % 9, rand() % 9);
	p10.obliczPole();
	p1.wyswietlDane();
	p2.wyswietlDane();
	p3.wyswietlDane();
	p4.wyswietlDane();
	p5.wyswietlDane();

	Pokoj kopia(p10);
}