#include <iostream>
#include <ctime>

using namespace std;

/*class A {
	string a = "klasaA";
public:
	A();
	A(string); //polimorfizm statyczny, przeciążanie klas, tworzenie wiązań przed uruchomieniem programu
	// kiedy dziedziczone metody mają takie same nazwy, klasa wybiera tą, która jest zdefiniowana w niej samej
	void wypisz() {
		cout << a << endl;
	}
	string getA() { return a; }
};

class B : private A {
public:
	string a = getA();
	string b = "klasaB";
	void wypisz() {
		cout << getA() << " " << b << endl;
	}
	string getAA() { return a; };
};

class C : public B {
public:
	string c = "klasaC";
	void wypisz() {
		cout << getAA() << " " << b << " " << c << endl;
	}
};

int main() {
	A a;
	a.wypisz();
	B b;
	b.wypisz();
	C c;
	c.wypisz();
}*/

class Pracownik {
//	polimorfizm dynamiczny, przeciążanie klas, tworzenie wiązań wraz z działaniem programu, ergo na bieżąco
public:
	string imie, nazwisko;
	//	metoda wirtualna metoda pozwala będzie się zmieniać w zależności od tego, w której klasie się znajdujemy
	//	takie podejście pozwala na korzystanie ze wskaźników, zamiast zwykłego "p2.imie = "
	virtual void zwrocDane() = 0;
};

class Nauczyciel : public Pracownik {
public:
	string przedmiot;
	void zwrocDane();
};

class Wychowawca : public Nauczyciel {
public:
	string klasa;
	void zwrocDane();
};

int main() {
	Pracownik* w_pracownik;

	Pracownik p1;
	w_pracownik = &p1;
	w_pracownik->imie = "jan";
	w_pracownik->nazwisko = "kowalski";
	w_pracownik->zwrocDane();

	Nauczyciel p2;
	w_pracownik = &p2;
	w_pracownik->imie = "adam";
	w_pracownik->nazwisko = "nowak";
	//wskaźnik ma tylko miejsce na imię i nazwisko, ponieważ jest typu Pracownik
	p2.przedmiot = "matematyka";
	p2.zwrocDane();

	Wychowawca p3;
	w_pracownik = &p3;
	w_pracownik->imie = "maria";
	w_pracownik->nazwisko = "jakas";
	w_pracownik->zwrocDane();
}

void Pracownik::zwrocDane()
{
	cout << "Pracownik" << endl;
	cout << imie << " " << nazwisko << endl << endl;
}

void Nauczyciel::zwrocDane()
{
	cout << "Nauczyciel" << endl;
	cout << imie << " " << nazwisko << " " << przedmiot << endl << endl;
}

void Wychowawca::zwrocDane()
{
	cout << "Wychowawca" << endl;
	cout << imie << " " << nazwisko << " " << klasa << " " << przedmiot << endl << endl;
}
