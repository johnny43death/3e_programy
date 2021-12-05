#include <iostream>
#include <ctime>

using namespace std;

/*class Prostokat {
public:
	int a, b;

	Prostokat();
	int pole();
	int obwod();
};

class Prostopadloscian : public Prostokat { 
//konstruktor klasy bazowej aktywowany przez klasę pochodną będzie z automatu domyślny, a nie parametryczny
public:
	int h;

	Prostopadloscian();

	int objetosc();
	int ppc();
	void wypisz();
};

Prostokat::Prostokat() {
	a = rand() % 10;
	b = rand() % 10;
}

int Prostokat::pole() {
	return a * b;
}

int Prostokat::obwod() {
	return 2*a + 2*b;
}

Prostopadloscian::Prostopadloscian() {
	h = rand() % 10;
}

int Prostopadloscian::objetosc()
{
	return a*b*h;
}

int Prostopadloscian::ppc()
{
	return 2*a*b + 2*a*h + 2*b*h;
}

void Prostopadloscian::wypisz()
{
	cout << a << " " << b << " " << h << endl;
}

int main() {
	srand(time(NULL));
	Prostopadloscian p1;
	p1.wypisz();
}
*/

/*class Prostokat {
private:
	int a, b;
public:
	Prostokat();
	int pole();
	int obwod();
	int getA();
	int getB();
};

class Prostopadloscian : public Prostokat {
public:
	int h;
	Prostopadloscian();
	int objetosc();
	int ppc();
	void wypisz();
};

Prostokat::Prostokat() {
	a = rand() % 10;
	b = rand() % 10;
}

int Prostokat::getA() {
	return a;
}
int Prostokat::getB() {
	return b;
}

int Prostokat::pole() {
	return a * b;
}

int Prostokat::obwod() {
	return 2 * a + 2 * b;
}

Prostopadloscian::Prostopadloscian() {
	h = rand() % 10;
}

int Prostopadloscian::objetosc()
{
	return getA() * getB() * h;
}

int Prostopadloscian::ppc()
{
	return 2 * getA() * getB() + 2 * getA() * h + 2 * getB() * h;
}

void Prostopadloscian::wypisz()
{
	cout << getA() << " " << getB() << " " << h << endl;
}

int main() {
	srand(time(NULL));
	Prostopadloscian p1;
	p1.wypisz();
	p1.objetosc();
	p1.ppc();
}*/

/*
class Prostopadloscian : private Prostokat 
 ^ prywatyzacja metod i zmiennych klasy bazowej
*/

class Prostokat {
public:
	int a, b;
	Prostokat();
	int pole();
	int obwod();
};

class Prostopadloscian : private Prostokat {
public:
	int h;
	Prostopadloscian();
	int objetosc();
	int ppc();
	void wypisz();
};

class Figura : public Prostopadloscian {
public:
	int ilosc;
	Figura() { ilosc = rand() % 10; }
	void wypisz() {
		cout << a << " " << b << " " << h << " " << ilosc << endl;
	}
};

Prostokat::Prostokat() {
	a = rand() % 10;
	b = rand() % 10;
}

int Prostokat::pole() {
	return a * b;
}

int Prostokat::obwod() {
	return 2 * a + 2 * b;
}

Prostopadloscian::Prostopadloscian() {
	h = rand() % 10;
}

int Prostopadloscian::objetosc()
{
	return a * b * h;
}

int Prostopadloscian::ppc()
{
	return 2 * a * b + 2 * a * h + 2 * b * h;
}

void Prostopadloscian::wypisz()
{
	cout << a << " " << b << " " << h << endl;
}

int main() {
	srand(time(NULL));
	Figura f1;
	f1.wypisz();
}