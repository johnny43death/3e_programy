#include <iostream>

using namespace std;

// NIEDOKOŃCZONE

class Prostokat {
private:
	double bok1;
	double bok2;
public:
	Prostokat();
	Prostokat(double, double);
	Prostokat(const Prostokat&); //konstruktor kopiujący
	void pobierzBoki(double&, double&);
	void ustawBoki(double, double);
	void obliczObwod(double, double);
	void obliczPole(double, double);
};

Prostokat::Prostokat() { //konstruktor domyślny
	bok1 = 2;
	bok2 = 4;
}

Prostokat::Prostokat(double pBok1, double pBok2) { //konstruktor parametryczny
	bok1 = pBok1;
	bok2 = pBok2;
}

Prostokat::Prostokat(const Prostokat& wzorzec) { //definicja konstruktora kopiującego 
	// bok 1 i 2 przepisujemy sobie ze wzorca, który zdefiniowaliśmy
	bok1 = wzorzec.bok1;
	bok2 = wzorzec.bok2;
}

void Prostokat::pobierzBoki(double& pBok1, double& pBok2) { // odwrotna funkcja 
	//do wydostawania zmiennych prywatnych z projektu
	pBok1 = bok1;
	pBok2 = bok2;
}

void Prostokat::ustawBoki(double pBok1, double pBok2) {
	bok1 = pBok1;
	bok2 = pBok2;
}

void Prostokat::obliczObwod() {

}

void Prostokat::obliczPole() {

}

Prostokat kopiujProstokat(Prostokat prostokat) { //wrzucamy obiekt i zwracamy kopię
	return prostokat;
}

int main() {
	double b1, b2;

	Prostokat p1(5, 7);
	p1.pobierzBoki(b1, b2);
	cout << b1 << " " << b2 << endl;

	Prostokat p2 = p1;
	p2.pobierzBoki(b1, b2);
	cout << b1 << " " << b2 << endl;

	Prostokat p3(p1);
	p3.pobierzBoki(b1, b2);
	cout << b1 << " " << b2 << endl;

	Prostokat p4;
	p4 = kopiujProstokat(p1); // najpierw tworzymy, potem kopiujemy właściwości
	p4.pobierzBoki(b1, b2);
	cout << b1 << " " << b2 << endl;
	p4.ustawBoki(11, 13);
	p4.pobierzBoki(b1, b2);
	cout << b1 << " " << b2 << endl;
}