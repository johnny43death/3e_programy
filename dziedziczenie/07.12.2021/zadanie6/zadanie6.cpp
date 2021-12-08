#include <iostream>
#include <ctime>

using namespace std;

class Stopien {
public:
	string stopien;
};

class Wydzial {
public:
	string wydzial;
};

class Policjant : protected Stopien {
public:
	string imie, nazwisko;
	virtual void wyswietl() {
		cout << "Policjant" << endl;
		cout << imie << " " << nazwisko << " " << stopien << endl << endl;
	}
	void set(string pImie, string pNazwisko, string pStopien) {
		imie = pImie;
		nazwisko = pNazwisko;
		stopien = pStopien;
	}
};

class Naczelnik : protected Policjant, protected Wydzial {
public:
	void wyswietl() {
		cout << "Naczelnik" << endl;
		cout << imie << " " << nazwisko << " " << stopien << " " << wydzial << endl << endl;
	}
	void set(string pImie, string pNazwisko, string pStopien, string pWydzial) {
		imie = pImie;
		nazwisko = pNazwisko;
		stopien = pStopien;
		wydzial = pWydzial;
	}
};

int main() {
	Policjant* p1 = new Policjant;
	p1->set("Jaroslaw", "Pepik", "st. aspirant");
	p1->wyswietl();

	Naczelnik* p2 = new Naczelnik;
	p2->set("Kamil", "Armata", "st. porucznik", "wydzial rabunkow i kradziezy");
	p2->wyswietl();
}