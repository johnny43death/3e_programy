#include <iostream>

using namespace std;

class Prostokat {
private:
	double bok1;
	double bok2;
	string kolor;
	int obramowanie;
public:
	Prostokat();
	Prostokat(double, double);
	void ustaw(string, int);
	void wyswietlDane();
};

Prostokat::Prostokat() { //konstruktor domyślny
	bok1 = 1;
	bok2 = 1;
}

Prostokat::Prostokat(double pBok1, double pBok2) {
	bok1 = pBok1;
	bok2 = pBok2;
}

void Prostokat::ustaw(string pKolor, int pObramowanie) {
	kolor = "bialy";
	obramowanie = 5;
}

/*
Prostokat::Prostokat() { //konstruktor domyślny
	bok1 = 1;
	bok2 = 1;
	ustaw("bialy", 5);
}

Prostokat::Prostokat(double pBok1, double pBok2) {
	bok1 = pBok1;
	bok2 = pBok2;
	ustaw("bialy", 5);
}

void Prostokat::ustaw(string pKolor, int pObramowanie) {
	kolor = pKolor;
	obramowanie = pObramowanie;
}
*/

/*
Prostokat::Prostokat() { //konstruktor domyślny
	kolor = "bialy";
	obramowanie = 5;
}

Prostokat::Prostokat(double pBok1, double pBok2) : Prostokat::Prostokat() {
	bok1 = pBok1;
	bok2 = pBok2;
}

void Prostokat::ustaw(string pKolor, int pObramowanie) {
	kolor = "bialy";
	obramowanie = 5;
}
*/

void Prostokat::wyswietlDane() {
	cout << bok1 << " " << bok2 << " " << kolor << " " << obramowanie << endl;
}

int main() {
	Prostokat p1;
	p1.wyswietlDane();

	Prostokat p2(5, 7);
	p2.wyswietlDane();
	p2.ustaw("czarny", 2);
	p2.wyswietlDane();
}